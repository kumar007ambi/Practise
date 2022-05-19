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
        long long int a, b;
        cin >> a >> b;
        long long int SA = 0, AN = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            if (s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X')
            {
                SA = SA + a;
            }
            else
            {
                AN = AN + b;
            }
        }
        if (SA > AN)
        {
            cout << "SARTHAK" << endl;
        }
        else if (SA < AN)
        {
            cout << "ANURADHA" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }

    return 0;
}
