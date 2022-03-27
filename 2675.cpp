#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int t,i,j,k;
	int r[1000];
	char S[1000][30];
	
	cin >> t;
	
	for(i=0; i<t; i++)
		cin >> r[i] >> S[i];
	
	for(i=0; i<t; i++){
		for(j=0; j<strlen(S[i]); j++){
			for(k=0; k<r[i]; k++)
				cout << S[i][j];
		}
		
		cout << "\n";
	}
	
	return 0;
}
