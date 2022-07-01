#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define vl vector<ll>
const int N = 500023;

using namespace std;

bool solve()
{
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] + arr[i + 1] > x)
                return 0;
            else
                swap(arr[i], arr[i + 1]);
        }
    }
    return 1;
}

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

        if (solve())
            cout << "YES"
                 << "\n";
        else
            cout << "No"
                 << "\n";
    }

    return 0;
}