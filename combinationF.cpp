#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n * factorial(n-1);
}

int main(){
    int n,r,combination;
    cout<<"Enter n and r value";
    cin>>n>>r;
    combination = factorial(n) / ( factorial( r )*factorial( n - r ) );
    cout<<"The combination is"<<" "<<combination<<endl;
    return 0;
}