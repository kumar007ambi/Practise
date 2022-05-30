#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int s = 0, r = 0;
        int d;
        for (int i = 0; i < 7; i++)
        {
            cin >> d;
            if (d == 1)
                s += 1;
            else
                r += 1;
        }
        if (s > r)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
