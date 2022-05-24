#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int i, k, cnt = 0;
        vector<int> a;
        for (i = 0; i < 10; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        cin >> k;
        for (i = 9; i >= 0; i--)
        {
            if (k >= a[i])
            {
                k = k - a[i];
                a[i] = 0;
            }
        }
        for (i = 0; i < 10; i++)
        {
            if (a[i] != 0)
            {
                cnt = i + 1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}