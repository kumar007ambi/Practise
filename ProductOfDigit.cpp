//152=1*5*2=10
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , pro = 1 , rem , temp ;
    cout << "Enter Any Number" << endl;
    cin >> n;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        pro =  pro * rem;
        n = n / 10;
    }
    cout << "Product digit of the Number "<< temp <<" is "<< pro << endl;
    return 0;
}