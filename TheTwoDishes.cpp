#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        if (s <= n)
        {
            cout << s << endl;
        }
        else
        {
            cout << n * 2 - s << endl;
        }
    }
    return 0;
}