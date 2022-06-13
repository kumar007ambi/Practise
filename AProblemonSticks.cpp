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
        set<long long int> x;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            x.insert(a);
        }
        int cnt = 0;
        for (int i : x)
        {
            if (i != 0)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}