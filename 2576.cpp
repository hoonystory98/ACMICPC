#include <iostream>
using namespace std;

int main(){
	int i, o=0, s=0, m=100;
	int a[7];
	
	for(i=0; i<7; i++){
		cin >> a[i];
		
		if(a[i]%2){
			o=a[i]%2;
			s+=a[i];
			if(a[i] < m)
				m=a[i];
		}
	}
	
	if(o)
		cout << s << "\n" << m;
	else
		cout << -1;
	
	return 0;
}
