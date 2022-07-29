#include <iostream>
using namespace std;

int main(){
	int a;
	
	cin >> a;
	
	if((a%400)==0)
		cout << ((a%400)==0);
	else
		cout << (((a%4)==0)&&((a%100)!=0));
 
	return 0;
}
