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
        cin >> n;
        int a[n * 2];
        int eve = 0, odd = 0;
        for (int i = 0; i < n * 2; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                eve++;
            }
            else
            {
                odd++;
            }
        }
        if (eve == odd)
        {
            cout << "0\n";
        }
        if (eve > odd)
        {
            cout << "1\n";
        }
        if (eve < odd)
        {
            cout << "2\n";
        }
    }

    return 0;
}