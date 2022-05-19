#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int h = 0, t = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'H')
            {
                h++;
            }
            else if (s[i] == 'T')
            {
                t++;
            }
            if (t > h || h - t > 1)
            {
                flag++;
                break;
            }
        }

        if (flag != 0)
        {
            cout << "Invalid" << endl;
        }
        else if (h == t)
        {
            cout << "Valid" << endl;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}
