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
        int sum1 = 0, sum2 = 0, rem1 = 0, rem2 = 0;
        for (int i = 0; i < 3; i++)
        {
            rem1 = n % 10;
            sum1 = sum1 + rem1;
            n = n / 10;
        }

        for (int i = 3; i < 6; i++)
        {
            rem2 = n % 10;
            sum2 = sum2 + rem2;
            n = n / 10;
        }
        if (sum1 == sum2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}