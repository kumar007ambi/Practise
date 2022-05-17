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
        int *a = new int[n];
        int less, more, c = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            less = 0, more = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] <= a[i])
                    less++;
                else
                    more++;
            }
            if (less - 1 >= more)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}

