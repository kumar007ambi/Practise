#include <iostream>
#include <vector>
using namespace std;
int main() {
	long long int n,k;
    cin>>n>>k;
//    long long int arr[n];
   vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//    long long int arr1[10000];
     vector<int> arr1(k);
    for(int i=0;i<n;i++){
      arr1[arr[i]%k]++;
    }
   long long int sum=0;
    for(int i=0;i<k;i++){
     sum = sum + (arr1[i]*(arr1[i]-1));
    }
  cout<<sum<<endl;
}