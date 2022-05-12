#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w1, w2, x1, x2, m, d;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        d = w2 - w1;
        if (d >= (x1 * m) && d <= (x2 * m))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}