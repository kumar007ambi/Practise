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
    int x, y, z;
    int xs = 0, ys = 0, zs = 0;
    while (t--)
    {
        cin >> x >> y >> z;
        xs += x;
        ys += y;
        zs += z;
    }
    if (xs == 0 && ys == 0 && zs == 0)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}