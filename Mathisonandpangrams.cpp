#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count[26] = {0};
        int sum = 0;
        int p[26];
        for (int i = 0; i < 26; i++)
        {
            cin >> p[i];
        }
        string s;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            count[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (!count[i])
            {
                sum += p[i];
            }
        }
        cout << sum << endl;
    }
}