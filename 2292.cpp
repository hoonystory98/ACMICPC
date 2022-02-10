#include <iostream>
using namespace std;

int main(){
	int n, i, c=1;
	
	cin >> n;
	
	for(i=1; i<n; i+=6*(c-1))
		c++;
	
	cout << c;
	
	return 0;
}
