#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c[n], w[n];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    for (int i = 0; i < n; i++)
        cin >> w[i];

    int mt = INT_MAX;
    int ma = INT_MAX;
    int mta = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (w[i] == 1)
        {
            mt = min(mt, c[i]);
        }
        else if (w[i] == 2)
        {
            ma = min(ma, c[i]);
        }
        else
        {
            mta = min(mta, c[i]);
        }
    }
    cout << min(mt + ma, mta) << endl;
    return 0;
}