#include <iostream>
using namespace std;

int main(){
	int i, j, k, l;
	
	cin >> l;
	
	for(i=0; i<l; i++){
		for(j=0; j<(l-i-1); j++)
			cout << " ";
		for(k=0; k<(i+1); k++)
			cout << "*";
		cout << "\n";
	}
	for(i=0; i<(l-1); i++){
		for(j=0; j<(i+1); j++)
			cout << " ";
		for(k=0; k<(l-i-1); k++)
			cout << "*";
		cout << "\n";
	}
	
	return 0;
}
