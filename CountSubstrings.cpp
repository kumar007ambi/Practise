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
        char arr[n];
        long n1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == '1')
                n1++;
        }
        cout << (n1 * (n1 + 1)) / 2 << endl;
    }

    return 0;
}
