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
        int dollar = 0, years = 0;
        dollar = b - a;
        years = dollar / c;
        cout << years << endl;
    }
    return 0;
}