#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x) {
    int index = -1;
    for (int i = 0; i < n; i++)
        if (arr[i] == x){
            index = i;
			break;
		}
	return index;
}

int main(){
    int n; //size of array
    cin >> n;
    int arr[n];
    // taking input in arr
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x; //Element to be searched
    cin >> x;
    int result = search(arr, n, x);
    cout<<result;
    return 0;
}