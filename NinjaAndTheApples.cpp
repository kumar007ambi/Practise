#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int cnt = 0;
        if (a > 0 && b > 0 && c == 0)
        {
            cnt = 1;
        }
        else if (a + c == b)
        {
            cnt = 0;
        }
        else
        {
            for (int i = c; i >= 0; i--)
            {
                if (a + c > b)
                {
                    cnt++;
                    c--;
                    b++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}