#include <iostream>
using namespace std;

#define NUMSIZE 100

int main(){
	int i, f, m=0, max=0;
	int n[10], a[NUMSIZE]={0,};
	
	for(i=0; i<10; i++){
		cin >> n[i];
		m+=n[i];
		a[n[i]/10]++;
	}
	
	for(i=0; i<100; i++){
		if(a[i]>max){
			max=a[i];
			f=i*10;
		}
	}
	
	cout << m/10 << "\n" << f;
	
	return 0;
}
