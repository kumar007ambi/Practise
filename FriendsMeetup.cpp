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
        if (a < b)
        {
            cout << "No" << endl;
        }
        else
        {
            for (int i = 0;; i++)
            {
                a = a + 1;
                b = b + 2;
                if (a == b)
                {
                    cout << "Yes" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}