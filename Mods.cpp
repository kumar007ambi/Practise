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
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=a[0];
    for(int i=1;i<n;i++){
       ans=ans%a[i];
    }
    sort(a,a+n);
    int ans1=a[n-1];
    for(int i=n-2;i>=0;i--){
        ans1=ans1%a[i];
    }
    if(ans==1 || ans1==1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
   }
}