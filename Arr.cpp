#include <iostream>
using namespace std;

int main() {
    int a[] = {5,1,15,20,25};
    int i, j, k;
    i = ++a[1];
    // cout<<++a[1]<<endl;
    j = a[1]++;
    //  cout<<a[1]++<<endl;
    k = a[i++];
    //  cout<<a[i++]<<endl;

    cout << i << " " << j << " " << k;
    return 0;
}