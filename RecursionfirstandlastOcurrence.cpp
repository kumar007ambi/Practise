#include <bits/stdc++.h>
#include<vector>
using namespace std;
int firstOcc(int* arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int* arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[8] = {0, 0 ,1 ,1, 2, 2, 2, 2};
    int n =  8;
    int k = 2;
    // pair<int,int> p;
    // p.first = firstOcc(arr, n, k);
    // p.second = lastOcc(arr, n, k);
    // return p;
    cout<<"first "<<firstOcc(arr, n, k)<<endl;
    cout<<"last "<<lastOcc(arr, n, k)<<endl;
}