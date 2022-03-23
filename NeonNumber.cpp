//Neon Number  9=9*9=81=8+1=9
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp = 0, sum = 0, rem = 0, square = 0;
    cout << "Enter Any Number" << endl;
    cin >> n;
    temp = n;
    square = n * n;
    while (square > 0)
    {
        rem = square % 10;
        sum = sum + rem ;
        square = square / 10;
    }
    if (temp == sum)
        cout << "Neon Number" << endl;
    else
        cout << "Not Neon Number" << endl;
    return 0;
}