#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        int arr[l];
        set<int> distinct;
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
            distinct.insert(arr[i]);
        }
        cout << distinct.size() << endl;
    }
    return 0;
}