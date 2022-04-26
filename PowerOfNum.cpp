#include<bits/stdc++.h>
using namespace std;

// int power(int x, int n){
//      if(n==0)
// 	   return 1;
// 	if(n==1)
// 	   return x;
// 	else
// 	  return x * power(x,n-1);
// }


int main(){
    int x,n;
    cin>>x>>n;
    // int ans = power(x,n);
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*x;
    }
    cout<<p;
    // cout<<ans;
}