#include <iostream>
using namespace std;

int main(){
	int a,l,n,m,c=0;
	
	cin >> a;
	
	l=a;
	
	while(1){
		n=(l/10)+(l%10);
		m=(l%10)*10+(n%10);
		c++;
		if(m==a)
			break;
		else
			l=m;
	}
	
	cout << c;
		
	return 0;
}
