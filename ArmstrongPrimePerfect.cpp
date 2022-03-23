#include <bits/stdc++.h>
using namespace std;

int Check_Armstrong(int Number);
int Perfect_Number(int Number);
int Prime_Number(int Number);

int main()
{
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    if (Check_Armstrong(n))
        cout << n << " is Armstrong Number" << endl;
    else
        cout << n << " is Not Armstrong Number" << endl;
    if (Prime_Number(n))
        cout << n << " is Prime Number" << endl;
    else
        cout << n << " is Not Prime Number" << endl;
    if (Perfect_Number(n))
        cout << n << " is Perfect Number" << endl;
    else
        cout << n << " is Not Perfect Number" << endl;
    return 0;
}

int Check_Armstrong(int Number)
{
    int temp, rem, num;
    temp = Number;
    while (Number > 0)
    {
        rem = Number % 10;
        num = num + (rem * rem * rem);
        Number = Number / 10;
    }
    if (temp == num)
        return 1;
    else
        return 0;
}

int Prime_Number(int Number)
{
    int flag = 0;
    for (int i = 2; i <= Number / 2; i++)
    {
        if (Number % 2 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}

int Perfect_Number(int Number)
{
    int i, Sum = 0;

    for (i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            Sum = Sum + i;
    }

    if (Sum == Number)
        return 1;
    else
        return 0;
}