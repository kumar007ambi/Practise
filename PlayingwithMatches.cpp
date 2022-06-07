#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = 0;
        sum = a + b;
        int rem = 0, ans = 0;
        while (sum != 0)
        {
            rem = sum % 10;
            if (rem == 0)
            {
                ans = ans + 6;
            }
            else if (rem == 1)
            {
                ans = ans + 2;
            }
            else if (rem == 2)
            {
                ans = ans + 5;
            }
            else if (rem == 3)
            {
                ans = ans + 5;
            }
            else if (rem == 4)
            {
                ans = ans + 4;
            }
            else if (rem == 5)
            {
                ans = ans + 5;
            }
            else if (rem == 6)
            {
                ans = ans + 6;
            }
            else if (rem == 7)
            {
                ans = ans + 3;
            }
            else if (rem == 8)
            {
                ans = ans + 7;
            }
            else if (rem == 9)
            {
                ans = ans + 6;
            }
            sum = sum / 10;
        }
        cout << ans << endl;
    }
    return 0;
}

