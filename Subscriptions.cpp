#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (n >= 1 && n <= 6)
        {
            cout << x << endl;
        }
        else if (n % 6 == 0)
        {
            cout << (n / 6) * x << endl;
        }
        else if (n % 6 != 0)
        {
            cout << ((n / 6) + 1) * x << endl;
        }
    }
    return 0;
}