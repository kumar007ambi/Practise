#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define vl vector<ll>
const int N = 500023;

using namespace std;

long long int testcases, Pow[1000001], n, x, MOD = 1000000007;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> testcases;

    Pow[0] = 1;
    for (int i = 1; i <= 1000000; i++)
        Pow[i] = (Pow[i - 1] * 2) % MOD;

    while (testcases--)
    {
        cin >> n >> x;
        cout << (x * Pow[n - 1]) % MOD << "\n";
    }

    return 0;
}