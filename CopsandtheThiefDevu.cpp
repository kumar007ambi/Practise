#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, x, y;
        cin >> m >> x >> y;
        int *a = new int[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        int dist = x * y;
        int cnt = 0;
        for (int i = 1; i <= 100; i++)
        {
            bool safe = true;
            for (int j = 0; j < m; j++)
            {
                int lR = a[j] - dist;
                int rR = a[j] + dist;
                if (i >= lR && i <= rR)
                {
                    safe = false;
                }
            }
            if (safe)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
