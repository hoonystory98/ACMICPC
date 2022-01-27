#include <iostream>
using namespace std;

#define MAXSIZE 50

int main(){
	int n, i, m, l=1, r=1;
	int h[MAXSIZE];
	
	cin >> n;
	
	for(i=0; i<n; i++)
		cin >> h[i];
		
	m=h[0];
	for(i=1; i<n; i++){
		if(h[i]>m){
			m=h[i];
			l++;
		}
	}
		
	m=h[n-1];
	for(i=(n-2); i>=0; i--){
		if(h[i]>m){
			m=h[i];
			r++;
		}
	}
	
	cout << l << "\n" << r;
	
	return 0;
}
