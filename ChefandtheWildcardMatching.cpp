#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        bool is = true;
        for (int i = 0; i < x.length(); i++)
        {
            bool areEqual = false;
            if (x[i] == '?' || y[i] == '?')
                areEqual = true;
            else
                areEqual = (x[i] == y[i]);

            if (!areEqual)
                is = false;
        }
        if (is)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
