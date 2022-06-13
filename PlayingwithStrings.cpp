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
        string a, b;
        cin >> a >> b;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                cnt1 += 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '1')
                cnt2 += 1;
        }
        if (cnt1 == cnt2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}