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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        ios_base::sync_with_stdio(false);
        cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int ans = n, open = 0, close = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
            {
                close++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
            {
                --close;
                continue;
            }
            ++open;
            ans = min(ans, n - 2 * min(open, close));
        }
        cout << ans << endl;
    }
    return 0;
}