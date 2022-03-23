#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=4;
    int *p=&x;
    cout<<"Add of x is "<<&x<<endl;
    cout<<"Val of p is "<<p<<endl;
    cout<<"Original Val of *p is "<<*p<<endl;
    cout<<"*p + 1 "<<p + 1 <<endl;//here vlaue increase by 4 byte
    // int **pp=&p;
    // cout<<"Add p_x"<<&p<<endl;
    // cout<<"Val p_p_x"<<pp<<endl;
    // cout<<"val *p_p_x"<<*pp<<endl;
    // cout<<"val **p_p_x"<<**pp<<endl;


}