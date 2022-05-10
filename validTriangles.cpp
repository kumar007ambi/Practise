#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    int a, b, c;

    while (t--)
    {
        cin >> a >> b >> c;
        int sum = 0;
        sum = a + b + c;
        if (sum == 180)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}