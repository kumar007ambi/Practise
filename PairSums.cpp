#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int arr[N];


int main(){
  int n,f,flag=0;
  cin >> n >> f;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  for(int i=0;i<n;i++){
      if(arr[i]+arr[i+1]==f){
       flag=1;
       break;
      }
  }
  if(flag==1){
      cout << "YES"<<endl;
  }else{
      cout<<"NO"<<endl;
  }

}
