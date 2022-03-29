#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int i, t, j;
	int m[1000], l[1000];
	char c[1000][81];
	
	cin >> t;
	
	for(i=0; i<t; i++){
		cin >> m[i] >> c[i];
		l[i]=strlen(c[i]);
	}
	
	for(i=0; i<t; i++){
		for(j=0; j<(m[i]-1); j++)
			cout << c[i][j];
		for(j=m[i]; j<l[i]; j++)
			cout << c[i][j];
			
		cout << "\n";
	}
	
	return 0;
}
