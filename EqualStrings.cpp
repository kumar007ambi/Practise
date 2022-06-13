#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, i, c = 0;
        cin >> n;
        string a, b, e = " ";
        cin >> a >> b;

        for (i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                c++;
            }
            else
            {
                e += b[i];
            }
        }
        sort(e.begin(), e.end());
        int ans = 0;
        for (i = 0; i < e.size() - 1; i++)
        {
            if (e[i] != e[i + 1])
            {
                ans += 1;
            }
        }
        cout << ans << endl;
    }
}
