#include<bits/stdc++.h>
using namespace std;


bool check(string str,int i,int j){
	if(i>j)
	return true;
    if(str[i] != str[j]){
        return false;
    }else{
       return check(str,i+1,j-1);
    }
	
}

int main(){
    string str="abcbaa";
   bool palindrome = check(str,0,str.size()-1);
    if(palindrome){
        cout<<"Palindrome";
    }else{
        cout<<"Not palindrome";
    }
}