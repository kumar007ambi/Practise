#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int w = 0, l = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                w++;
            else
                l++;
        }
        if (w > l)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
