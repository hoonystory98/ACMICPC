#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
	int i, j;
	
	for(i=0; i<n; i++){
		for(j=1; j<(n-i); j++){
			if(arr[j-1] < arr[j])
				swap(arr[j-1],arr[j]);
		}
	}
}

int main(){
	unsigned long long a;
	int d=0, i;
	int n[11];
	
	cin >> a;
	
	while(a){
		n[d]=a%10;
		a/=10;
		d++;
	}
	
	bubblesort(n,d);
	
	if(d){
		for(i=0; i<d; i++)
			cout << n[i];
	}
	else
		cout << 0;
		
	return 0;
}
