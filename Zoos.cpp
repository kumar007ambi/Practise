#include <bits/stdc++.h>
using namespace std;

int main(){

int z = 0;
int o = 0;
char arr[20];
     
     for(int i = 0; i < 20; i++){
          cin>>arr[i];
        }

     for(int i = 0; i < 20; i++){
          if(arr[i] == 'z'){
               z++;
            }else if(arr[i]=='o'){
               o++;
            }else{
                continue;
            }
        }
      if ((z*2)==o){
        cout << "Yes" << endl;
       }else{
        cout << "No" << endl;
       }

}

