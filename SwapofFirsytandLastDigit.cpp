//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, FD, LD, DigitCount, swap, a, b,temp;
    cout << "Enter Any Number" << endl;
    cin >> n;
    temp = n;
    DigitCount = log10(n);
    FD = n / (pow(10, DigitCount));
    LD = n % 10;
    a = FD * (pow(10, DigitCount));
    b = n % a;
    n = b / 10;
    swap = LD * (pow(10, DigitCount)) + (n * 10 + FD);
    cout << "After swap of Digits number " << temp << " is " << swap << endl;
    return 0;
}