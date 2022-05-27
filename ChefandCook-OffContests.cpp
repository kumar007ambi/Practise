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
        string str;
        int c = 0, s = 0, e = 0, m = 0, h = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            if (str == "cakewalk")
            {
                c = 1;
            }
            else if (str == "simple")
            {
                s = 1;
            }
            else if (str == "easy")
            {
                e = 1;
            }
            else if (str == "easy-medium" || str == "medium")
            {
                m = 1;
            }
            else if (str == "medium-hard" || str == "hard")
            {
                h = 1;
            }
        }

        if (c + s + e + m + h == 5)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}