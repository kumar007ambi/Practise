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
        int ans = -1;
        int a[n];
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] + a[i + 2] == a[i + 1] + a[i + 3])
            {
                ans = a[i] * a[i + 1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}