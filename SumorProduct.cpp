#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int sum = 0, pro = 1;
        if (q == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                sum = sum + i;
            }
        }
        else if (q == 2)
        {
            for (int i = 1; i <= n; i++)
            {
                pro = pro * i;
            }
        }
        cout << sum << endl;
        cout << pro << endl;
    }
    return 0;
}