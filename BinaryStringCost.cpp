#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        int ans = 0;

        if (x >= y)
        {
            sort(s.begin(), s.end(), greater<char>()); //

            for (int i = 1; i < n; i++)
            {
                if (s[i - 1] == '1' && s[i] == '0')
                {
                    ans = ans + y;
                }
            }
        }
        else
        {
            sort(s.begin(), s.end());

            for (int i = 1; i < n; i++)
            {
                if (s[i - 1] == '0' && s[i] == '1')
                {
                    ans = ans + x;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}