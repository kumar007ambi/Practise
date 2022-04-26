#include<bits/stdc++.h>
using namespace std;


int main(){
    double sf,ef,step;
    cin>>sf>>ef>>step;
    double value;
    for(int i = sf; i <= ef ; i = i + step){
        value = (i-32) * 5/9;
        cout<<i<<" "<<value<<endl;
    }
}