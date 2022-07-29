#include <iostream>
using namespace std;

#define MAXSIZE 1000000

int n[MAXSIZE];
int a[MAXSIZE];

void merge(int s, int m, int e){
	int i=s, j=m+1, k=s, l;
	
	while((i<=m) && (j<=e)){
		if(n[i]<=n[j])
			a[k++] = n[i++];
		else
			a[k++] = n[j++];
	}
	
	while(i<=m)
		a[k++] = n[i++];
	while(j<=e)
		a[k++] = n[j++];
	
	for(l=s; l<=e; l++)
		n[l] = a[l];
}

void mergesort(int s, int e){
	int m;
	
	if(s<e){
		m=(s+e)/2;
		
		mergesort(s,m);
		mergesort(m+1,e);
		merge(s,m,e);
	}
}

int main(){
	int t, i;
	
	cin >> t;
	
	for(i=0; i<t; i++)
		cin >> n[i];
		
	mergesort(0,t-1);
	
	for(i=0; i<t; i++)
		cout << n[i] << "\n";
		
	return 0;
}
