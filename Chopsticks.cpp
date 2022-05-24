#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, d;
    cin >> n >> d;
    long long int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int count = 0;
    for (int i = 0; i < n - 1;)
    {
        if (a[i + 1] - a[i] <= d)
        {
            count += 1;
            i += 2;
        }
        else
        {
            i++;
        }
    }
    cout << count << endl;
    return 0;
}