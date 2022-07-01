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
    int t, N = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        cout << "Case #" << N << ": " << sum % m << endl;
        N++;
    }

    return 0;
}