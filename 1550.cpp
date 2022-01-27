#include <iostream>
#include <string.h>
using namespace std;

int xsq(int x){
	int a, c=1;
	
	for(a=0; a<x; a++)
		c*=16;
		
	return c;
}

int main(){
	int i, n=0;
	char xn[7];
	
	cin >> xn;
	
	for(i=0; i<strlen(xn); i++)
		n+=((xn[i]>64)?((int)(xn[i]-55)*xsq(strlen(xn)-(i+1))):((int)(xn[i]-48)*xsq(strlen(xn)-(i+1))));
		
	cout << n;
	
	return 0;
}
