#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        int dist = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        dist = a[0];
        if (dist == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                cnt++;
                dist = dist + a[i + 1] - 1;
                if (dist == 0)
                    break;
            }
            cout << cnt + dist << endl;
        }
    }
    return 0;
}