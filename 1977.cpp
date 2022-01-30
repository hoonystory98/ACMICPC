#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int m, n, i, s=0, c=0;
	
	cin >> m >> n;
	
	for(i=m; i<=n; i++){
		if(s==0){
			if(((float)sqrt(i)-(int)sqrt(i))==0){
				s=i;
				c+=i;
			}
		}
		else{
			if(((float)sqrt(i)-(int)sqrt(i))==0)
				c+=i;
		}
	}
	
	if(s)
		cout << c << "\n" << s;
	else
		cout << -1;
	
	return 0;
}
