#include <iostream>
using namespace std;

int hann(int n);

int main(){
	int a,i,c=0;
	
	cin >> a;
	
	for(i=1; i<=a; i++){
		if(i<100)
			c++;
		else
			c+=hann(i);
	}
	
	cout << c;
		
	return 0;
}

int hann(int n){
	if(((n/100)-((n/10)-(n/100)*10))==(((n/10)-(n/100)*10)-(n%10)))
		return 1;
	else
		return 0;
}
