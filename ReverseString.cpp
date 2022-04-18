#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       int st=0;
       int end=s.length()-1;
       while(st<end){
           swap(s[st],s[end]);
           st++;
           end--;
       }
    //  reverse(s.begin(),s.end());
    /*char c;
    int l=s.length();
    for(int i=0;i<l/2;i++){
        c=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=c;
    }
    */
    cout<<s;
   }
}