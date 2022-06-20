#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        string s = "";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= k)
            {
                if (k >= a[i])
                {
                    k = k - a[i];
                    s = s + '1';
                }
            }
            else
            {
                s = s + '0';
            }
        }
        cout << s << endl;
    }
    return 0;
}
