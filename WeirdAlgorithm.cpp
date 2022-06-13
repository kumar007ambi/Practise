#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << n << " ";

        while (true)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
                cout << n << " ";
                if (n == 1)
                    break;
            }
            else
            {

                n = (n * 3) + 1;
                cout << n << " ";
                if (n == 1)
                    break;
            }
        }
    }
    return 0;
}