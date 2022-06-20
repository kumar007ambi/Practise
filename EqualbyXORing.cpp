#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, z = 1;
        cin >> a >> b >> c;
        while (z < c)
        {
            z = z * 2;
        }
        if ((a ^ b) == 0)
            cout << "0" << endl;
        else if ((a ^ b) < c)
            cout << "1" << endl;
        else if ((a ^ b) < z)
            cout << "2" << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}