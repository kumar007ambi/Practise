//Palindrome Number Read from Both sides same as 121 and after resverse the digit 121 remains same
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
        sum = sum * 10 + rem ;
        n = n / 10;
    }
    if (temp == sum)
        cout << "Palindrome Number" << endl;
    else
        cout << "Not Palindrome Number" << endl;
    return 0;
}