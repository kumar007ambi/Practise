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
        int first_min = INT_MAX;
        int second_min = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            int val;
            cin >> val;
            if (val < first_min)
            {
                second_min = first_min;
                first_min = val;
            }
            else if (val < second_min)
            {
                second_min = val;
            }
        }
        cout << first_min + second_min << endl;
    }

    return 0;
}
