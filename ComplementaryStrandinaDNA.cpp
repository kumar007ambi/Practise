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
        int N;
        string s, n = "";
        cin >> N >> s;
        for (int i = 0; i < N; i++)
        {
            if (s[i] == 'A')
            {
                n += 'T';
            }
            else if (s[i] == 'T')
            {
                n += 'A';
            }
            else if (s[i] == 'C')
            {
                n += 'G';
            }
            else if (s[i] == 'G')
            {
                n += 'C';
            }
        }
        cout << n << "\n";
    }

    return 0;
}