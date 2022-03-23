#include<bits/stdc++.h>
using namespace std;

int sumArray(int arr[],int size){
    int sum = 0;
  for(int i=0;i<size;i++){
      sum = sum + arr[i];
  }
  return sum;
}


int main(){
    int n;
    cout << "Enter the size"<<endl;
    cin >> n;
    cout << "Enter array elements " << endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
   int res =  sumArray(arr,n);
    cout << "The sum is " << res << endl;
}