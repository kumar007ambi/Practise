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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        
        if (n == 2)
        {
            cout << "2 1" << endl;
        }
        else if (n == 3)
        {
            cout << "2 1 3" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                b[n - 2 * i - 1] = a[n - i - 1];
                b[n - 2 * i - 2] = a[i];
            }
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " " << endl;
            }
        }
    }
    return 0;
}
