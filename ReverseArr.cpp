#include<bits/stdc++.h>
using namespace std;

void rev(int arr[],int start,int end){
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int n; //size of array
    cin >> n;
    int arr[n];
    // taking input in arr
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
       
    rev(arr, 0, n-1);
    
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}