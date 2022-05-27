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
        int cnt = 0;
        while (n > 0)
        {
            int s = floor(sqrt(n));
            n = n - (s * s);
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}