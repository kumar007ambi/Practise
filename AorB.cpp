#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int first = 0, second = 0, first1 = 0, second1 = 0;
        first = 500 - (x * 2);
        second = 1000 - ((y + x) * 4) + first;
        first1 = 1000 - (y * 4);
        second1 = 500 - ((x + y) * 2) + first1;
        if (second > second1)
            cout << second << endl;
        else
            cout << second1 << endl;
    }
    return 0;
}
