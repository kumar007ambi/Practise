#include <bits/stdc++.h>
using namespace std;

string reverseEachWord(string input)
{
    string s = "", temp = "";
    input = input + ' ';
    // cout<<"input "<<input<<endl;
    int n = input.size();
    for (int i = 0; i < n; i++)
    {
        if (input[i] != ' ')
        {
            temp = input[i] + temp;
        }
        else
        {
             s += temp + " ";
             temp = "";
        }
    }
    return s;
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    
}