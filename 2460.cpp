#include <iostream>
using namespace std;

int main(){
	int i, d, u, c=0, m=-1;
	
	for(i=0; i<10; i++){
		cin >> d >> u;
		
		c=c-d+u;
		
		if(c > m)
			m=c;
	}
	
	cout << m;
	
	return 0;
}
