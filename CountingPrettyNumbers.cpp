#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int rem, cnt = 0;
        for (int i = l; i <= r; i++)
        {
            rem = i % 10;
            if (rem == 2 || rem == 3 || rem == 9)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}