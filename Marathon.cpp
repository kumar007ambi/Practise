#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int D, d, a, b, c;
        cin >> D >> d >> a >> b >> c;
        int tot = D * d;
        if (tot >= 42)
        {
            cout << c << endl;
        }
        else if (tot >= 21)
        {
            cout << b << endl;
        }
        else if (tot >= 10)
        {
            cout << a << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
