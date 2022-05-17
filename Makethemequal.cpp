#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int maxx = 0;
        for (int i = 0; i < n; i++)
        {
            if (maxx < a[i])
            {
                maxx = a[i];
            }
        }
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (ans < maxx - a[i])
            {
                ans = maxx - a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}