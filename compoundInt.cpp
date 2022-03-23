#include <bits/stdc++.h>
using namespace std;

int main()
{
    float Pamount,Roi,Time,CI,CIF;
    cin>>Pamount>>Roi>>Time;
    CIF=Pamount*(pow((1+Roi/100),Time));
    CI=CIF-Pamount;
    cout<<"Compound Intrest is"<<" "<<CI<<endl;
    return 0;
}