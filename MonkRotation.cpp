#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long int arr[n],temp[n];
		int i=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i = 0;i<n;i++){
            temp[(i+k)%n] = arr[i];
        }
        for(int i=0;i<n;i++){
			arr[i]=temp[i];
		}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
}