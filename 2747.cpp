#include <iostream>
using namespace std;

int main(){
	int i, t, s=1, q=1, c=0;
	
	cin >> t;
	
	if((t==1) || (t==2)){
		c=1;
	}
	else{
		for(i=3; !(i>t); i++){
			c=s+q;
			s=q;
			q=c;
		}
	}
	
	cout << c;
	
	return 0;
}
