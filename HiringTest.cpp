#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x, y;
        cin >> x >> y;
        for (int i = 0; i < n; i++)
        {
            int full = 0;
            int partial = 0;
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                if (x == 'F')
                {
                    full++;
                }
                else if (x == 'P')
                {
                    partial++;
                }
            }
            if (full >= x || (full == (x - 1) && partial >= y))
            {
                cout << '1';
            }
            else
            {
                cout << '0';
            }
        }
        cout << endl;
    }

    return 0;
}
