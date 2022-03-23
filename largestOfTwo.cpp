#include<bits/stdc++.h>
using namespace std;

int main(){
     int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<"The greatest is"<<" "<<a<<endl;
    }else if(b>a){
        cout<<"The greatest is"<<" "<<b<<endl;
    }else{
         cout<<"Both are Equal"<<endl;
    }
   return 0;
}