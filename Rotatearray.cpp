#include <bits/stdc++.h>
using namespace std;

void left_rotate_by_one(int arr[], int n)
{

    /* Shift operation to the left */
    int temp = arr[0], i;
    // cout<<"temp"<<temp<<endl;
    for (i = 0; i < n - 1; i++){
        arr[i] = arr[i + 1];
        //  cout<<"arr"<<arr[i]<<endl;
    }
        arr[i] = temp;
        //  cout<<"arr[i]"<<arr[i]<<endl;
    
}

void array_left_rotate(int arr[], int no_of_rotations, int n)
{
    for (int i = 0; i < no_of_rotations; i++)
        left_rotate_by_one(arr, n); // Function is called for no_of_rotations times
}

int main()
{
    int n; // size of array
    cin >> n;
    int arr[n];
    // taking input in arr
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int r;
    cin >> r;
    array_left_rotate(arr, r, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}