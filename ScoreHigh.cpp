#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[4];
        for(int i=0;i<4;i++)
        cin>>a[i];
        for(int i=0;i<4;i++){
            if(a[0]<a[i])
            a[0]=a[i];
        }
        cout<<a[0]<<endl;
    }
    return 0;
}
