#include <bits/stdc++.h>
using namespace std;

int print(int n);

int print(int n)
{
    if (n <= 100)
    {
        cout << n << endl;
    }
    return print(n + 1);
}

int main()
{
    int n = 1;
    print(n);
    return 0;
}
