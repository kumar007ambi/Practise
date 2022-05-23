#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long int sum1 = 0, sum2 = 0;
        if (k <= n / 2)
        {
            for (int i = 0; i < k; i++)
            {
                sum1 += a[i];
            }
            for (int i = k; i < n; i++)
            {
                sum2 += a[i];
            }
            cout << sum2 - sum1 << endl;
        }
        else
        {
            for (int i = n - 1; i > k; i--)
            {
                sum1 += a[i];
            }
            for (int i = 0; i < n - k; i++)
            {
                sum2 += a[i];
            }
            cout << sum1 - sum2 << endl;
        }
    }

    return 0;
}
