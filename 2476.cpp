#include <iostream>
using namespace std;

#define MAXSIZE 1000

int prize(int a, int b, int c){
	int r;
	
	if((a==b) && (b==c) && (c==a))
		r=10000+a*1000;
	else if(a==b)
		r=1000+a*100;
	else if(b==c)
		r=1000+b*100;
	else if(c==a)
		r=1000+c*100;
	else
		r=((a>b)?((a>c)?a:c):((b>c)?b:c))*100;
	
	return r;
}

int main(){
	int n, i, d1, d2, d3, m=0;
	int p[MAXSIZE];
	
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> d1 >> d2 >> d3;
		p[i]=prize(d1,d2,d3);
		
		if(p[i]>m)
			m=p[i];
	}
	
	cout << m;
	
	return 0;
}
