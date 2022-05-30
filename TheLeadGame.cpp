#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    int a, b;
    int sum1 = 0, sum2 = 0;
    int l, max = 0, w;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        sum1 += a;
        sum2 += b;
        if (sum1 > sum2)
        {
            l = sum1 - sum2;
            if (l > max)
            {
                max = l;
                w = 1;
            }
        }
        else
        {
            l = sum2 - sum1;
            if (l > max)
            {
                max = l;
                w = 2;
            }
        }
    }

    cout << w << " " << max << endl;

    return 0;
}
