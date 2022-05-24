#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, i;
        cin >> x >> n;
        vector<int> a;
        for (i = 0; i < x; i++)
        {
            int c;
            cin >> c;
            a.push_back(c);
        }
        sort(a.begin(), a.end());
        int count = 0;
        for (i = 0; i < x; i++)
        {
            if (a[i] != a[i + 1])
                count += 1;
        }
        int ans = min(x - n, count);
        cout << ans << endl;
    }
    return 0;
}