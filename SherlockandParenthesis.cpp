#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, N = 1;
    cin >> t;
    while (t--)
    {
        long long int l, r;
        cin >> l >> r;
        long long int n = 0;
        n = min(l, r);
        long long int ans = 0;
        ans = (n * (n + 1)) / 2;
        cout << "Case #" << N << ": " << ans << endl;
        N++;
    }

    return 0;
}