#include<bits/stdc++.h>
using namespace std;
 
int firstOccurence(int arr[],int n,int k){
  int s=0,e=n-1;
  int mid = s + (e-s)/2;
  int ans = -1;
  while(s <= e){
      if(arr[mid] == k){
          ans = mid;
          e = mid - 1;
      }else if( k < arr[mid]){
          e = mid -1;
      }else if( k > arr[mid]){
          s = mid + 1;
      }
      mid = s + (e-s)/2;
  }
  return ans;
}

int lastOccurence(int arr[],int n,int k){
  int s=0,e=n-1;
  int mid = s + (e-s)/2;
  int ans = -1;
  while(s <= e){
      if(arr[mid] == k){
          ans = mid;
          s = mid + 1;
      }else if( k < arr[mid]){
          e = mid -1;
      }else if( k > arr[mid]){
          s = mid + 1;
      }
      mid = s + (e-s)/2;
  }
  return ans;
}

int main(){
    int even[8]={0,0,1,1,2,2,2,2};
    cout << "The first occurence of 2 is at Index " << firstOccurence(even,8,2)<< endl;
    cout << "The last occurence of 2 is at Index " << lastOccurence(even,8,2)<< endl;
} 