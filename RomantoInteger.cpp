#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int i, temp = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (s[i] == 'M')
            {
                temp += 1000;
            }
            else if (s[i] == 'C' && s[i + 1] == 'M')
            {
                temp += 900;
                i++;
            }
            else if (s[i] == 'D')
            {
                temp += 500;
            }
            else if (s[i] == 'C' && s[i + 1] == 'D')
            {
                temp += 400;
                i++;
            }
            else if (s[i] == 'C')
            {
                temp += 100;
            }
            else if (s[i] == 'X' && s[i + 1] == 'C')
            {
                temp += 90;
                i++;
            }
            else if (s[i] == 'L')
            {
                temp += 50;
            }
            else if (s[i] == 'X' && s[i + 1] == 'L')
            {
                temp += 40;
                i++;
            }
            else if (s[i] == 'X')
            {
                temp += 10;
            }
            else if (s[i] == 'I' && s[i + 1] == 'X')
            {
                temp += 9;
                i++;
            }
            else if (s[i] == 'V')
            {
                temp += 5;
            }
            else if (s[i] == 'I' && s[i + 1] == 'V')
            {
                temp += 4;
                i++;
            }
            else if (s[i] == 'I')
            {
                temp += 1;
            }
        }
        if (i < n)
        {
            if (s[i] == 'M')
                temp += 1000;
            else if (s[i] == 'D')
                temp += 500;
            else if (s[i] == 'C')
                temp += 100;
            else if (s[i] == 'L')
                temp += 50;
            else if (s[i] == 'X')
                temp += 10;
            else if (s[i] == 'V')
                temp += 5;
            else if (s[i] == 'I')
                temp += 1;
        }
        cout << temp << endl;
    }
    return 0;
}