#include <bits/stdc++.h>
using namespace std;
 
int isPowerOfTwo(int n)
{
  	// Base case: '1' is the only odd number which is a power of 2(2^0).
    if (n == 1)
    {
        return true;
    }

    // All other odd numbers are not powers of 2.
    else if (n % 2 != 0 || n == 0)
    {
        return false;
    }

    // Recursive function call.
    return isPowerOfTwo(n / 2);
}

int main(){
    int n;
    cin>>n;
    int ans = isPowerOfTwo(n);
     if(ans == n)
       cout<<"True "<<isPowerOfTwo<<endl;
    else
       cout<<"False "<<isPowerOfTwo<<endl;
       
} 