#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define vl vector<ll>
const int N = 500023;

using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (i = 0; i < n; i++)
        {
            ans += a[i];
            ans -= k;
            if (ans < 0)
            {
                break;
            }
        }
        if (i == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO"
                 << " " << i + 1 << endl;
        }
    }

    return 0;
}