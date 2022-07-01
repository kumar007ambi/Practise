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
        int n;
        cin >> n;
        int a = n / 100;
        int r = n % 100;
        if ((a + r) <= 10)
            cout << (a + r) << "\n";
        else
            cout << "-1" << "\n";
    }

    return 0;
}