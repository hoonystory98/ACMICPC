#include <iostream>
using namespace std;

#define MAXSIZE 100000

int main(){
	int t, i, j, m, a, b;
	int c[MAXSIZE];
	
	cin >> t;
	
	for(i=0; i<t; i++){
		cin >> a >> b;
		
		for(j=1; !(j>((a<b)?a:b)); j++){
			if(((a%j)==0) &&  ((b%j)==0))
				m=j;
		}
		
		c[i]=a*b/m;
	}
	
	for(i=0; i<t; i++)
		cout << c[i] << "\n";
	
	return 0;
}
