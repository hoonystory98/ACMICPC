#include <iostream>
using namespace std;

int main(){
	int a[10],i,m;
	int max=0;
	
	for(i=0; i<9; i++)
		cin >> a[i];
	
	for(i=0; i<10; i++){
		if(a[i]>max){
			m=i;
			max=a[i];
		}
	}
 
 	cout << a[m] << "\n" << m+1;
 
	return 0;
}
