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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            int pro = 1;
             cout << "start sum " << sum << "pro " << pro << endl;
            for (int j = i; j < n; j++)
            {
                sum = sum + a[j];
                pro = pro * a[j];
                cout << "sum " << sum << "pro " << pro << endl;
                if (sum == pro)
                    cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}