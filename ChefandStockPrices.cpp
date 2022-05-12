#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int s, a, b, c;
        cin >> s >> a >> b >> c;
        if (a * 100 <= s * (c + 100) && s * (c + 100) <= b * 100)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}    