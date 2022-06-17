#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int O = 0, Z = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                O++;
            else
                Z++;
        }
        cout << 2 * min(O, Z) + (O != Z) << endl;
    }
    return 0;
}
