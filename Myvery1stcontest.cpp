#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int sub = 0, notSolve = 0;
    sub = n - a;
    notSolve = sub - b;
    cout << sub << " " << notSolve;
    return 0;
}
