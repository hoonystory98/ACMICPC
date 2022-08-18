#include <iostream>
using namespace std;

int main(){
	int i;
	int x[4],y[4];
	
	for(i=0; i<3; i++)
		cin >> x[i] >> y[i];
	
	if(x[0]==x[1])
		x[3]=x[2];
	else if(x[1]==x[2])
		x[3]=x[0];
	else if(x[2]==x[0])
		x[3]=x[1];
	
	if(y[0]==y[1])
		y[3]=y[2];
	else if(y[1]==y[2])
		y[3]=y[0];
	else if(y[2]==y[0])
		y[3]=y[1];
		
	cout << x[3] << " " << y[3];
	
	return 0;
}
