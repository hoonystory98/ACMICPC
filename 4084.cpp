#include <iostream>
#include <stdlib.h>
using namespace std;

#define MAXSIZE 100000

int k;

int viladi(long long a, long long b, long long c, long long d){
	if((a==b) && (b==c) && (c==d) && (d==a))
		return k;
	else{
		k++;
		return viladi(abs(a-b),abs(b-c),abs(c-d),abs(d-a));
	}
}

int main(){
	int i, p=0;
	long long a, b, c, d;
	int n[MAXSIZE];
	
	cin >> a >> b >> c >> d;
	
	while((a!=0) && (b!=0) && (c!=0) && (d!=0)){
		k=0;
		n[p]=viladi(a,b,c,d);
		p++;
		
		cin >> a >> b >> c >> d;
	}
	
	for(i=0; i<p; i++)
		cout << n[i] << "\n";
	
	return 0;
}
