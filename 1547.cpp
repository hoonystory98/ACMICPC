#include <iostream>
using namespace std;

int main(){
	int cup[3]={1,0,0},i,m,x,y,t;

	cin >> m;

	for(i=0; i<m; i++){
		cin >> x >> y;
		t=cup[x-1];
		cup[x-1]=cup[y-1];
		cup[y-1]=t;
	}

	for(i=0; i<3; i++){
		if(cup[i])
			cout << i+1;
	}

	return 0;
}
