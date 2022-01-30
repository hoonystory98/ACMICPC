#include <iostream>
using namespace std;

int main(){
	int n, i;
	long long v = 5, p = 7;
	
	cin >> n;
	
	for(i=1; i<n; i++){
		v+=p;
		p+=3;
	}
	
	cout << v%45678;
	
	return 0;
}
