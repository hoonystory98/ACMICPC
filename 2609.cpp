#include <iostream>
using namespace std;

int main(){
	int a, b, i, m;
	
	cin >> a >> b;
		
	for(i=1; !(i>((a<b)?a:b)); i++){
		if(((a%i)==0) &&  ((b%i)==0))
			m=i;
	}
	
	cout << m << "\n" << a*b/m;
	
	return 0;
}
