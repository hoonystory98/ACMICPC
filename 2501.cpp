#include <iostream>
using namespace std;

int main(){
	int p, q, k, c=0;
	
	cin >> p >> k;
	
	for(q=1; q<=p; q++){
		if(p%q==0){
			c++;
			
			if(c==k)
				break;
		}
	}
	
	if(c<k)
		cout << 0;
	else
		cout << q;
	
	return 0;
}
