#include <iostream>
using namespace std;

int main(){
	long long n;
	int f, a=0;
	
	cin >> n >> f;
	
	n=n/100*100;
	
	while(n%f!=0){
		n++;
		a++;
	}
	
	if(a<10)
		cout << 0 << a;
	else
		cout << a;
	
	return 0;
}
