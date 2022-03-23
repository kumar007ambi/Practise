#include<bits/stdc++.h>
using namespace std;

int main(){
     int a,b;
     long power=1;
     cout<<"Enter values";
     cin>>a>>b;
    //  int result=pow(a,b);
    //  cout<<"The value is "<<result<<endl;
    for(int i=1;i<=b;i++){
        power=power*b;
    }
    cout<<power<<endl;
    
   return 0;
}

