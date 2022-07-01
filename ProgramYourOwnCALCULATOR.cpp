#include <bits/stdc++.h>
// #define ll long long int
// #define pb push_back
// #define mp make_pair
// #define mod 1000000007
// #define vl vector<ll>
// const int N = 500023;

using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL), cout.tie(NULL);
    double a, b;
    char c;
    cin >> a >> b >> c;

    if (c == '+')
    {
        cout << a + b << endl;
    }
    else if (c == '-')
    {
        cout << a - b << endl;
    }
    else if (c == '*')
    {
        cout << a * b << endl;
    }
    else
    {
        cout << setprecision(10) << a / b << endl;
    }

    return 0;
}