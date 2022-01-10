#include <iostream>
using namespace std;

int main(){
	int i, j, k=0;
	char c[8][8];
	
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			cin >> c[i][j];
			
			if((i%2==0) && (j%2==0)){
				if(c[i][j]=='F')
					k++;
			}
			else if((i%2) && (j%2)){
				if(c[i][j]=='F')
					k++;
			}
		}
	}
	
	cout << k;
	
	return 0;
}
