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
        int a[n], count = 1, mn;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        mn = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] <= mn)
                count++;

            if (a[i] < mn)
                mn = a[i];
        }

        cout << count << endl;
    }
    return 0;
}