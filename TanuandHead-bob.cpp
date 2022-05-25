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
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'I')
            {
                cout << "INDIAN" << endl;
                break;
            }
            else if (s[i] == 'Y')
            {
                cout << "NOT INDIAN" << endl;
                break;
            }
            else if (s[i] == 'N')
                cnt++;
        }
        if (cnt == n)
            cout << "NOT SURE" << endl;
    }
    return 0;
}