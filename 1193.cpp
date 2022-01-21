#include <iostream>
using namespace std;

int main(){
	int x, i, j=0, a=0, b=1;
	
	cin >> x;
	
	for(i=0; i<x; i+=j){
		a++;
		j++;
	}
	
	while(i!=x){
		a--;
		b++;
		i--;
	}
		
	if(j%2)
		cout << b << "/" << a;
	else
		cout << a << "/" << b;
	
	return 0;
}
