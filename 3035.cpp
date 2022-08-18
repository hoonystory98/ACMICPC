#include <iostream>
using namespace std;
#define MAX_SIZE 50

int main(){
	int r,c,zr,zc,i,j,a,b;
	char enews[MAX_SIZE][MAX_SIZE];
	
	cin >> r >> c >> zr >> zc;
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++)
			cin >> enews[i][j];
	}
	
	for(i=0; i<r; i++){
		for(a=0; a<zr; a++){
			for(j=0; j<c; j++){
				for(b=0; b<zc; b++)
					cout << enews[i][j];
			}
			cout << "\n";
		}
	}
	
	return 0;
}
