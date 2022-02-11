#include <iostream>
using namespace std;

int main(){
	int i, j, k, l;
	
	cin >> l;
	
	for(i=0; i<l; i++){
		for(j=0; j<(l-i-1); j++)
			cout << " ";
		for(k=0; k<(2*i+1); k++)
			cout << "*";
		if((i+1) < l)
			cout << "\n";
	}
	
	return 0;
}
