#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            long long int s, im;
            cin >> s >> im;
            if (s <= x && ans < im)
                ans = im;
        }
        cout << ans << endl;
    }
    return 0;
}