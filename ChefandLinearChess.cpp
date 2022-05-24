#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long int k;
        cin >> n >> k;
        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            long long int a;
            cin >> a;

            if (ans < a && k % a == 0)
            {
                ans = a;
            }
        }
        cout << ans << endl;
    }
    return 0;
}