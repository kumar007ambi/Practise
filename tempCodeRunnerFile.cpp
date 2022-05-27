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
        int ca = 0, si = 0, ea = 0, me = 0, ha = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (s == "cakewalk")
            {
                ca = 1;
            }
            else if (s == "simple")
            {
                si = 1;
            }
            else if (s == "easy")
            {
                ea = 1;
            }
            else if ((s == "easy-medium") || (s == "medium"))
            {
                me = 1;
            }
            else if ((s == "medium-hard") || (s == "hard"))
            {
                ha = 1;
            }
        }

        if (ca + si + ea + me + ha == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}