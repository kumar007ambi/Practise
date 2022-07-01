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
        for (int i = 0; i < n - 1; i += 2)
        {
            swap(s[i], s[i + 1]);
        }
        for (int i = 0; i < n; i++)
        {
            s[i] = 'z' + 'a' - s[i];
        }
        cout << s << endl;
    }

    return 0;
}