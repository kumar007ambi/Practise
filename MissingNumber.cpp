#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n;
    cin >> n;
    int sum = 0;
    vector<int> a(n);
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    int total = n * (n + 1) / 2;
    cout << total - sum << endl;

    return 0;
}