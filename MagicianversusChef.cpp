#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, s;
        cin >> n >> x >> s;

        while (s--)
        {
            int a, b;
            cin >> a >> b;
            if (x == a)
                x = b;
            else if (x == b)
                x = a;
        }
        cout << x << endl;
    }
    return 0;
}