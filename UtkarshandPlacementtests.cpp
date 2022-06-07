#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a, b, c;
        cin >> a >> b >> c;
        char f, s;
        cin >> f >> s;
        if (f == a)
            cout << f << endl;
        else if (s == a)
            cout << s << endl;
        else if (f == b)
            cout << f << endl;
        else
            cout << s << endl;
    }
    return 0;
}