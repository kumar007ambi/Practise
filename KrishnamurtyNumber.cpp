//KrishnaMurty Number  153=1!+5!+3!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp = 0, sum = 0, rem = 0;
    cout << "Enter Any Number" << endl;
    cin >> n;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (temp == sum)
        cout << "Krisnamurty Number" << endl;
    else
        cout << "Not Krisnamurty Number" << endl;
    return 0;
}