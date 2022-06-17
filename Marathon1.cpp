#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b > a && c > a && d > a)
        {
            cout << "3" << endl;
        }
        else if ((b > a && c > a) || (c > a && d > a) || (b > a && d > a))
        {
            cout << "2" << endl;
        }
        else if (b > a || c > a || d > a)
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
