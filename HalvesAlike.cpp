#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
     string s;
     cin>>s;
      int count1=0,count2=0;
        for(int i=0;i<s.length();i++){
        if(i<s.size()/2){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'
                  || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                    count1++;
                }
        }else{
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'
                  || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                    count2++;
                }
            }
        }
      cout<<count1<<" "<<count2;
   }
}   