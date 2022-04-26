#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,digit=0,esum=0,osum=0;
    cin>>n;
    while(n!=0){
        digit = n % 10;
        if(digit % 2 == 0){
            esum = esum + digit;
        }else{
            osum = osum + digit;
        }
        n = n / 10;
    }
    cout<<"Even Sum is "<<esum<<" "<<"Odd Sum is "<<osum;
}