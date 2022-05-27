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
        int n = s.size(), i = 0, count = 0;
        while (i < n)
        {
            if (s[i] == '0')
                i++;
            else
            {
                count++;
                i++;
                while (i < n && s[i] == '1')
                    i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}