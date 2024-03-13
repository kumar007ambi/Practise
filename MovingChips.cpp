#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define vl vector<ll>
const int N = 500023;

using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt0=0,cnt1=0,ans=0;
    for (int i=0;i<n;i++){
        if(a[i]==0) {
            cnt0++;
        }else if(a[i]==1){
           cnt1++;
        }
    }
    if(cnt1>cnt0){
        ans=(n-cnt1)-(cnt1-cnt0);
    }else if(cnt0>cnt1){
         ans=(n-cnt0)-(cnt0-cnt1);
    }
    cout<<ans<<endl;
   }
}