#include <iostream>
using namespace std;

int main(){
	int i, j, k, l;
	
	cin >> l;
	
	for(i=0; i<l; i++){
		for(k=0; k<(2*l-2*i-1); k++)
			cout << "*";
		if((i+1) < l)
			cout << "\n";
		for(j=0; j<(i+1); j++)
			cout << " ";
	}
	
	return 0;
}
