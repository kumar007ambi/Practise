#include <bits/stdc++.h>
using namespace std;
 
long long Power(int X, int N)
{
    if(N==0)
	   return 1;
	if(N==1)
	   return X;
	else
	  return X * Power(X,N-1);
}

int main(){
    int m,n;
    cin>>m>>n;
    int ans = Power(m,n);
    cout<<"Power is "<<ans;
       
} 