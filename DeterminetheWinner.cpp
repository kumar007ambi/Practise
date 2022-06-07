#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int p1, p2, q1, q2;
        cin >> p1 >> p2 >> q1 >> q2;
        int pM = max(p1, p2);
        int qM = max(q1, q2);
        if (pM < qM)
        {
            cout << "P" << endl;
        }
        else if (pM > qM)
        {
            cout << "Q" << endl;
        }
        else
        {
            cout << "TIE" << endl;
        }
    }
    return 0;
}
