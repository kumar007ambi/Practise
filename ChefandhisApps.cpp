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
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        int temp = s - (x + y);
        if (temp >= z)
        {
            cout << "0\n";
        }
        else
        {
            temp = s - min(x, y);
            if (temp >= z)
            {
                cout << "1\n";
            }
            else
            {
                cout << "2\n";
            }
        }
    }

    return 0;
}