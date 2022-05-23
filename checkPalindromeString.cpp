#include <bits/stdc++.h>
using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}
char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    string temp = "";
    // remove unneccsary symbols,whitespaces
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    // lowercase
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }
    int st = 0;
    int e = temp.length() - 1;

    while (st <= e)
    {
        if (temp[st] != temp[e])
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    }
    return 1;
}