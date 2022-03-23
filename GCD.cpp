#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,GCD;
    cout<<"Enter your numbers"<<endl;
    cin>>a>>b;
    for(int i=1;i<=a&&i<=b;i++){
        if(a%i==0 && b%i==0){
            GCD=i;
        }
    }
    cout<<"GCD is "<<GCD;
  return 0;
}
