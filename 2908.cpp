#include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
	
	cin >> a >> b;
	
	c=((a%10)*100)+(((a%100)/10)*10)+(a/100);
	d=((b%10)*100)+(((b%100)/10)*10)+(b/100);
	
	cout << ((c>d)?c:d);
	
	return 0;
}
