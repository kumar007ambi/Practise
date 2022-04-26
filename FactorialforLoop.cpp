#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int fact = 1;
    if(n<0){
        cout<<"Error";
    }if(n==0){
        fact = 1;
    }
    while(n != 0){
        fact = fact * n;
        n--;
    }
    cout<<fact;
//     if(n >= 0){
//        for(int i = 1; i <= n; i++)
//             fact = fact * i;
//         cout << fact;
//    } 
//    else
//         cout << "Error";
}