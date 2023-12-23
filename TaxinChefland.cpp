#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x < 100)
        {
            cout << x << endl;
        }
        else if (x == 100)
        {
            cout << x << endl;
        }
        else
        {
            cout << x - 10 << endl;
        }
    }
}