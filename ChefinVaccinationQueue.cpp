#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, x, y;
        cin >> n >> p >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 0; i < p; i++)
        {
            if (a[i] == 1)
            {
                ans = ans + y;
            }
            else
            {
                ans = ans + x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}