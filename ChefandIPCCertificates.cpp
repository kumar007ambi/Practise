#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int x, sum;
    int ans = 0;
    while (n--)
    {
        sum = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            sum += x;
        }
        cin >> x;
        if (sum >= m && x <= 10)
            ans++;
    }
    cout << ans << endl;
    return 0;
}