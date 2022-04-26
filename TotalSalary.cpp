#include <bits/stdc++.h>
using namespace std;

int main() {
    //Write your code here
    float salary;
	char grade;
	cin>>salary>>grade;
	float hra = 0;
    hra = (salary * 20) / 100;
	float da = 0;
    da = (salary * 50)/100;
	float pf = 0;
    pf = (salary * 11)/100;
	float total = 0;
	if(grade == 'A'){
		total = salary + hra + da + 1700 - pf; 
	}else if(grade == 'B'){
		total = salary + hra + da + 1500 - pf; 
	}else{
		total = salary + hra + da + 1300 - pf; 
	}
	cout<<round(total);
    return 0;
}