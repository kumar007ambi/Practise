#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define vl vector<ll>
#define all(c) (c).begin(), (c).end()
using namespace std;
ll power(ll a, ll b)
{
    ll res = 1;
    a %= mod;
    assert(b >= 0);
    for (; b; b >>= 1)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
    }
    return res;
}
ll modInverse(ll a) { return power(a, mod - 2); }
const int N = 500023;
bool vis[N];
vector<int> adj[N];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int tot = 0;
        for (char c : s)
        {
            if (c - '0' >= 0 && c - '9' <= 0)
                tot += c - '0';
        }
        cout << tot << endl;
    }
    return 0;
}