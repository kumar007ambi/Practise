#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n, i, cnt = 0;
        cin >> a >> b;
        n = abs(a - b);
        for (i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (n / i == i)
                {
                    cnt += 1;
                }
                else
                {
                    cnt += 2;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
