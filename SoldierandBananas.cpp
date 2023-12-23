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

    int k, w, n;
    cin >> k >> w >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * k);
    }
    if (w < sum)
        cout << (sum - w) << endl;
    else
        cout << 0 << endl;
}
