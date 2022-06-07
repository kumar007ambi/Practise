#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y > x)
        {
            cout << y - x << endl;
        }
        else if ((x - y) % 2 == 0)
        {
            cout << (x - y) / 2 << endl;
        }
        else
        {
            cout << 2 + (x - y) / 2 << endl;
        }
    }
    return 0;
}
