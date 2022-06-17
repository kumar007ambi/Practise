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
        string s, z = "";
        cin >> s;
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                z += 'A';
            }
            else if (s[i] == '0' && s[i + 1] == '1')
            {
                z += 'T';
            }
            else if (s[i] == '1' && s[i + 1] == '0')
            {
                z += 'C';
            }
            else if (s[i] == '1' && s[i + 1] == '1')
            {
                z += 'G';
            }
        }
        cout << z << endl;
    }
    return 0;
}
