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
        int n, ans = 0;
        cin >> n;
        unordered_map<char, int> a;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            a[c]++;
        }
        for (auto &ele : a)
        {
            int n1 = (ele.second - 1);
            int n2 = 2;
            ans += n1 + n2;
        }
        cout << ans << "\n";
    }
}
