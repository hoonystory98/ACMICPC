#include <iostream>
using namespace std;

#define MAXSIZE 100

int main(){
	int n, m, i, j, k, s, a, z=9999999;
	int c[MAXSIZE];
	
	cin >> n >> m;
	
	for(i=0; i<n; i++)
		cin >> c[i];
		
	for(i=0; i<(n-2); i++){
		for(j=(i+1); j<(n-1); j++){
			for(k=(j+1); k<n; k++){
				s=c[i]+c[j]+c[k];
				if(((m-s)<z) && ((m-s)>=0)){
					z=m-s;
					a=s;
				}
			}
		}
	}
	
	cout << a;
		
	return 0;
}
