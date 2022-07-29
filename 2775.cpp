#include <iostream>
using namespace std;

#define MAXSIZE 100000

int resident(int a, int b);

int main(){
	int t, i, k, n;
	int r[MAXSIZE];
	
	cin >> t;
	
	for(i=0; i<t; i++){
		cin >> k >> n;
		r[i]=resident(k,n);
	}
	
	for(i=0; i<t; i++)
		cout << r[i] << "\n";
	
	return 0;
}

int resident(int a, int b){
	int i, s=0;
	
	if(a==0)
		return b;
	else
		for(i=0; i<b; i++)
			s+=resident(a-1,i+1);
		
		return s;
}
