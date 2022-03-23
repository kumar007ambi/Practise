#include<bits/stdc++.h>
using namespace std;

int main(){

    int sum = 0, sum_odd = 0, sum_even = 0;
    int i = 0, n = 0, arr_num = 0, first = 0;

    cin>>n;

    int arr[n];

    for (i = 0; i < n; i++){
        cin>>arr[i];
    }

    for (i = 0; i < n; i++){
        if (i < (n / 2)){
            while (arr[i] != 0){
                first = arr[i] % 10;
                arr[i] = arr[i] / 10;
            }
            arr[i] = first;
        }else{
            arr[i] = arr[i] % 10;
           }   
    }

    for (i = 0; i < n; i++) {
        arr_num = arr_num * 10 + arr[i];
    }

    for (i = 0; i < n; i++) {
        if (i % 2 == 0){
            sum_odd = sum_odd + arr[i];
        }else{
            sum_even = sum_even + arr[i];
        }
    }
    sum = sum_odd - sum_even;
    cout<<sum<<sum_odd<<sum_even;
    if (sum % 11 == 0)
        cout<<"OUI";
    else
        cout<<"NON";

    return 0;

}