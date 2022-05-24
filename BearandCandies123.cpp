#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, b;
        cin >> l >> b;
        int count = 0;
        int tl = 0, tb = 0;
        while (tl <= l && tb <= b)
        {
            count += 1;
            tl += count;
            count += 1;
            tb += count;
        }
        if (tl > l && tb > b)
        {
            cout << "Bob" << endl;
        }
        else if (tl > l)
        {
            cout << "Bob" << endl;
        }
        else if (tb > b)
        {
            cout << "Limak" << endl;
        }
    }
    return 0;
}