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
        int len = s.length();
        bool flag = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
        if (len >= 10)
            flag = 1;
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                flag1 = 1;
        }
        for (int i = 1; i < len - 1; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                flag2 = 1;
            else if (s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')
                flag3 = 1;
            if (s[i] >= '0' && s[i] <= '9')
                flag4 = 1;
        }
        if (flag == 1 && flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
