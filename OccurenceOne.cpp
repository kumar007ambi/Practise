#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
	int n;
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            a[0]++;
        }else if(arr[i]==1){
            a[1]++;
        }else if(arr[i]==2){
            a[2]++;
        }else if(arr[i]==3){
            a[3]++;
        }else if(arr[i]==4){
            a[4]++;
        }else if(arr[i]==5){
            a[5]++;
        }else if(arr[i]==6){
            a[6]++;
        }else if(arr[i]==7){
            a[7]++;
        }else if(arr[i]==8){
            a[8]++;
        }else if(arr[i]==9){
            a[9]++;
        }
    }
   int sum=0;
   int pos=-1;
    for(int i=0;i<10;i++){
        // cout<<i<<" "<<a[i]<<endl;
          sum=sum+a[i]; 
        if(a[0] < a[i]){
           a[0] = a[i];
            pos = i;
        }
    }
    // cout<<a[0];
    cout<<pos;
   if(a[0]>floor(sum/2)){
    cout<<pos;
   }else{
       cout<<pos;
   }
    // for(int i=0;i<10;i++){
    //   if(a[i]==1){
    //       cout<<i;
    //   }
    // }
}