#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int r, c;
        cin >> r >> c;
		char arr[1000][1000];
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                cin >> arr[i][j];
            }
        }
        int max = 0;
        for (int i = 0; i < r; i++){
            int count = 0;
            for (int j = 0; j < c; j++){
                if (arr[i][j] == '#'){
                    count++;
                }
            }
			if (count > max){
				max = count;
				}        
        }
          cout << max << endl;
    }
}