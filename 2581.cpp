#include <iostream>
using namespace std;

int isprime(int a){
	int k;
	
	for(k=2; k<=a; k++){
		if(a%k==0)
			break;
	}
	
	if(k==a)
		return 1;
	else
		return 0;
}

int main(){
	int m, n, i, s=0, min=10001;
	
	cin >> m >> n;
	
	for(i=m; i<=n; i++){
		if(isprime(i)){
			min=i;
			s=i;
			break;
		}
	}
	if(min!=10001){
		for(i++; i<=n; i++)
			s+=i*isprime(i);
			
		cout << s << "\n" << min;
	}
	else
		cout << -1;
		
	return 0;
}
