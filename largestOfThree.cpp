#include<bits/stdc++.h>
using namespace std;

int main(){
     int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"The greatest is"<<" "<<a<<endl;
    }else if(b>a && b>c){
        cout<<"The greatest is"<<" "<<b<<endl;
    }else if(c>a && c>b){
        cout<<"The greatest is"<<" "<<c<<endl;
    }else{
         cout<<"All are Equal"<<endl;
    }
   return 0;
}