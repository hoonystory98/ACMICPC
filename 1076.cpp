#include <iostream>
#include <string>
using namespace std;

int resistv(string r){
	if(r == "black")
		return 0;
	else if(r == "brown")
		return 1;
	else if(r == "red")
		return 2;
	else if(r == "orange")
		return 3;
	else if(r == "yellow")
		return 4;
	else if(r == "green")
		return 5;
	else if(r == "blue")
		return 6;
	else if(r == "violet")
		return 7;
	else if(r == "grey")
		return 8;
	else if(r == "white")
		return 9;
}

long long tsquare(int x){
	int i, c=1;
	
	for(i=0; i<x; i++)
		c*=10;
		
	return c;
}

int main(){
	int i;
	string resist;
	unsigned long long r=0;
	
	for(i=0; i<3; i++){
		cin >> resist;
		
		if(i==0)
			r+=resistv(resist)*10;
		else if(i==1)
			r+=resistv(resist);
		else
			r*=tsquare(resistv(resist));
	}
	
	cout << r;
	
	return 0;
}
