#include<bits/stdc++.h>
using namespace std;

int countBits(int n){
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    int count=0;
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--){
        if(binaryNum[j]==1){
            count++;
        }
    }
   
    return count;
}

int main(){
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}