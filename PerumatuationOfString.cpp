#include <bits/stdc++.h>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    bool flag = 1;

    for(int i = 0 ; i < strlen(input1) ;i++){
        for(int j = 0 ; j < strlen(input2) ;j++){
            if(input1[i] != input2[j]){
                cout<<"i = "<<input1[i]<<endl;
                cout<<"j = "<<input2[j]<<endl;
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}