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
        int a, b, c;
        cin >> a >> b >> c;
        if(a > 50)
        {
            cout << "A\n" ;
            continue ;
        }
        if(b > 50)
        {
            cout << "B\n" ;
            continue ;
        }
        if(c > 50)
        {
            cout << "C\n" ;
            continue ;
        }
        cout << "NOTA\n" ;
    }

    return 0;
}