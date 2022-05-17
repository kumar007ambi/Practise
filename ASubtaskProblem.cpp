#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], totalSum = 0, Msum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            totalSum += a[i];
        }
        for (int i = 0; i < m; i++)
        {
            Msum += a[i];
        }
        if (totalSum == n)
        {
            cout << "100" << endl;
        }
        else if (Msum == m)
        {
            cout << k << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}