#include<bits/stdc++.h>
using namespace std;
const int M=1e9+10;
const int N=1e5+10;

long long fact[N];

int main(){
    //preccomputed the values of factorials and store it
    fact[0]=fact[1]=0;
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1] * i;
    }

    int n;
    cin>>n;
    while(n--){
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }
}