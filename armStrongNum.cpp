#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,rem=0,sum=0,temp;
    cout<<"Enter your choice"<<endl;
    cin>>n;
    temp=n;
     while(n>0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(temp==sum)
    cout<<"Armstrong Number"<<endl;
    else
    cout<<"Not an Armstrong number"<<endl;
}
