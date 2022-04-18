#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr,int s,int e,int k){
    //base case
   if(s>e)
   return false;

   int mid = s + (e-s)/2;

   if( arr[mid] == k ){
   return mid;
   }
   //if  k>mid
   if( arr[mid] < k ){
    return binarySearch(arr , mid + 1, e , k);
   }else{
    return binarySearch(arr , s , mid - 1, k);
    }
}

int main(){
    int arr[5] = {1,4,5,8,9};
    int size = 5;
    int key = 20;
    bool res = binarySearch(arr,0,size-1,key);
    cout<< "Present or Not " << res<<endl;
    return 0;
}