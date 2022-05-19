#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int cnt = 0;
        for (int i = 0; i < y; i++)
        {
            if (y > x)
            {
                x = x + 8;
                cnt++;
                if (x >= y)
                {
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
