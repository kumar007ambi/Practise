#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int ans = 0;
    if (n >= 1 && n <= 50)
        ans = 100;
    else if (n >= 51 && n <= 100)
        ans = 50;
    cout << ans << endl;
    return 0;
}