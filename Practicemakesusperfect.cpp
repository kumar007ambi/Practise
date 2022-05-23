#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        int n;
        cin >> n;
        if (n >= 10)
            cnt += 1;
    }
    cout << cnt << endl;
    return 0;
}
