#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        string c = "";
        for (int i = 0; i < a.size(); i++)
        {
            if (b[i] != a[i])
            {
                c += 'B';
            }
            else
            {
                c += 'G';
            }
        }
        cout << c << endl;
    }
    return 0;
}