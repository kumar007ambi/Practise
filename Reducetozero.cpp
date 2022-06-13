#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long p = max(a, b);
        long long q = a + b - p;
        if (q != 0)
        {
            long long cnt = (int(log2(p / q)));
            long long x = q;
            for (int i = 0; i < cnt; i++)
            {
                x *= 2;
            }
            if (x != p)
            {
                cnt++;
            }
            cout << cnt + p << endl;
        }
        else if (p == 0 && q == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}
