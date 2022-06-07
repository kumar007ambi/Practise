#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int totM=x*5+y*10;
        cout<<(totM/z)<<endl;
    }
    return 0;
}
