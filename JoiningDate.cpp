#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int t = n / 5;
        if (n % 5 == 0)
        {
            t--;
        }
        int r = k / 5;
        if (k % 5 == 0)
        {
            r--;
        }
        cout << t - r << endl;
    }
    return 0;
}
