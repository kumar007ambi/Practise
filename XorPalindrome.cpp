#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        string a;
        cin >> a;
        int cnt = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (a[i] != a[n - i - 1])
                cnt++;
        }
        cout << (cnt + 1) / 2 << endl;
    }
    return 0;
}
