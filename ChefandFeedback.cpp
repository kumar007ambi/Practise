#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        for (long long int i = 0; i + 2 < s.length(); i++)
        {
            if (s.substr(i, 3) == "010" || s.substr(i, 3) == "101")
                ans += 1;
        }
        if (ans)
            cout << "Good" << endl;
        else
            cout << "Bad" << endl;
    }
    return 0;
}
