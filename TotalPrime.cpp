#include<bits/stdc++.h>
using namespace std;

bool checkprime(int n){
	if(n == 2)
		return true;
	for(int i=2; i<n; i++){
        // cout<<"n "<<i<<endl;
		if(n % i == 0){
            // cout<<"n "<<n<<endl;
            // cout<<n % i<<endl;
			return false;
			break;
		}
	}
	return true;
}

int totalPrime(int s, int e){
	int count = 0;
	for(int i = s; i <= e; i++){
		if(checkprime(i)){
            cout<<checkprime(i)<<endl;
			count++;
		}
	}
	return count;
}
int main(){
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}