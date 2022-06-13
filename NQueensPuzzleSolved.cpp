#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--){
	    int n;
	    cin>>n;
	    float ans = pow(0.143*n,n);

	    if(ans-floor(ans) < 0.5)
	    cout<<floor(ans)<<endl;
	    else
	    cout<<floor(ans)+1<<endl;
	    //cout<<(int)(pow(0.143*n,n)+0.5)<<endl;
	}
	return 0;
}
