#include <iostream>
using namespace std;

int main(){
	int a, b, c, p;
	
	cin >> a >> b >> c;
	
	if((a==b) && (b==c) && (c==a))
		p=10000+a*1000;
	else if(a==b)
		p=1000+a*100;
	else if(b==c)
		p=1000+b*100;
	else if(c==a)
		p=1000+c*100;
	else
		p=((a>b)?((a>c)?a:c):((b>c)?b:c))*100;
	
	cout << p;
	
	return 0;
}
