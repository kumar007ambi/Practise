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

        int num, ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> num;

            ans = num ^ ans;
        }

        cout << ans << endl;
    }
    return 0;
}