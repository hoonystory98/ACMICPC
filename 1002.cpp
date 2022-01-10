#include <iostream>
using namespace std;
#include <math.h>

#define MAXSIZE 100000

int main(){
	int t, i;
	double x1, y1, r1, x2, y2, r2, d;
	int likspot[MAXSIZE];
	
	cin >> t;
	
	for(i=0; i<t; i++){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		
		d = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		
		if((d==0) && (r1==r2))
			likspot[i]=-1;
		else if(d==(r1-r2)*(r1-r2))
			likspot[i]=1;
		else if(d==(r1+r2)*(r1+r2))
			likspot[i]=1;
		else if((d<((r1+r2)*(r1+r2))) && (d>((r1-r2)*(r1-r2))))
			likspot[i]=2;
		else if(d<((r1+r2)*(r1+r2)))
			likspot[i]=0;
		else if(d>((r1+r2)*(r1+r2)))
			likspot[i]=0;
	}
	
	for(i=0; i<t; i++)
		cout << likspot[i] << "\n";
	
	return 0;
}
