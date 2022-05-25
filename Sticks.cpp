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
        int a[n], i, area = 1, cnt = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (i = n - 1; i > 0; i--)
        {
            if (a[i] == a[i - 1])
            {
                area = area * a[i];
                i--;
                cnt++;
            }
            if (cnt == 2)
                break;
        }
        if (cnt < 2)
            cout << -1 << endl;
        else
            cout << area << endl;
    }
    return 0;
}