#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,coef=1;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
               if (j == 0 || i == 0)
                coef = 1;
               else
                coef = coef*(i-j+1)/j;
                cout<<coef;
            }
            cout<<endl;
        }
    }
}