#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define vl vector<ll>
const int N = 500023;

using namespace std;

int main(){
    string s;
    cin>>s;
    long int ans=1,maxVal=1;
    for(int i=1;i<s.size();i++){
       if(s[i]==s[i-1]){
         ans++;
         maxVal=max(ans,maxVal);
       }else{
         ans=1;
       }
    }
    cout<<maxVal;
}