#include <iostream>
using namespace std;

#define MAXSIZE 1000

int main(){
	int n, i, j, m, min;
	int a[MAXSIZE];
	
	cin >> n;
	
	for(i=0; i<n; i++)
		cin >> a[i];
		
	for(i=0; i<n; i++){
		min=1001;
		for(j=i; j<n; j++){
			if(a[j]<min){
				min=a[j];
				m=j;
			}
		}
		swap(a[m],a[i]);
	}
	
	for(i=0; i<n; i++)
		cout << a[i] << "\n";
		
	return 0;
}
