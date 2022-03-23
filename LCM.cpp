//LCM
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, max;
    cout << "Enter two integers " << endl;
    cin >> a >> b;
    max = (a > b) ? a : b;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            cout << "LCM is " << max << endl;
            break;
        }
        ++max;
    }
    return 0;
}