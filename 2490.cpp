#include <iostream>
using namespace std;

int main(){
	int i, j;
	int c[3]={0,};
	int y[3][4];
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			cin >> y[i][j];
			c[i]+=y[i][j];
		}
	}
	
	for(i=0; i<3; i++){
		switch(c[i]){
			case 0:
				cout << "D\n";
				break;
			case 1:
				cout << "C\n";
				break;
			case 2:
				cout << "B\n";
				break;
			case 3:
				cout << "A\n";
				break;
			case 4:
				cout << "E\n";
				break;
			default:
				break;
		}
	}
	
	return 0;
}
