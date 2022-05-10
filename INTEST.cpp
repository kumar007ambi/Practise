#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a % k == 0)
            count++;
        
    }

    cout << count;

    return 0;
}