#include <iostream>
using namespace std;

int main(){
	int n1, n2, n3, n4, n5, kn;
	
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	
	kn=((n1*n1)+(n2*n2)+(n3*n3)+(n4*n4)+(n5*n5))%10;
	
	cout << kn;
		
	return 0;
}
