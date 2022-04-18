#include<bits/stdc++.h>
using namespace std;

void toLower(string& s){
    for(int i=0;i<s.length();i++){
     if (s[i] >= 'A' && s[i] <= 'Z')
            // Convert uppercase to lowercase
            s[i] = s[i] + 32;
    }

}

int main(){
    string s;
    cin>>s;

    toLower(s);
    cout<<s;
}