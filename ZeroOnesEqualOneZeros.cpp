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
        string s = "";
        if (n % 2)
        {
            for (int i = 0; i < n; i++)
            {
                s += '0';
                i++;
                if (i == n)
                    break;
                s += '1';
            }
        }
        else
        {
            s += '1';
            for (int i = 1; i < n - 1; i++)
            {
                s += '0';
            }
            s += '1';
        }
        cout << s << endl;
    }
    return 0;
}