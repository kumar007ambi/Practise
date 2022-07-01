#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int val1 = 0, val2 = 0;
    for (int i = 0; i < t; i++)
    {
        string n;
        cin >> n;

        if (n == "++X" || n == "X++")
        {
            val1 += 1;
        }
        else if (n == "--X" || n == "X--")
        {
            val2 += 1;
        }
    }
    cout << val1 - val2 << endl;
    return 0;
}