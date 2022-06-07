#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d = n / 3;
        int h1 = d + 2, h2 = d + 1, h3 = d - 1;
        if (h1 + h2 + h3 == n)
            cout << h2 << " " << h1 << " " << h3 << endl;
    }
    return 0;
}