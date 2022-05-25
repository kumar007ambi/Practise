#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, vs, ve;
        cin >> n >> vs >> ve;
        float ts = float(n * sqrt(2)) / float(vs);
        float te = float(n * 2) / float(ve);
        if (ts <= te)
            cout << "Stairs" << endl;
        else if (te < ts)
            cout << "Elevator" << endl;
    }
    return 0;
}