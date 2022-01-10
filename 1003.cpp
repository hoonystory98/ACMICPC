#include <iostream>
using namespace std;

#define MAXSIZE 10000

int main(){
	int t, i, n, j, c, a=1, b=1;
	int cz[MAXSIZE]={0,}, co[MAXSIZE]={0,};
	
	cin >> t;
	
	for(i=0; i<t; i++){
		cin >> n;
		
		if(n==0)
			cz[i]++;
		else if(n==1)
			co[i]++;
		else{
			for(j=2; j<n; j++){
				c=a+b;
				a=b;
				b=c;
			}
			cz[i]=a;
			co[i]=b;
		}
		a=1;
		b=1;
	}
	
	for(i=0; i<t; i++)
		cout << cz[i] << " " << co[i] << "\n";
	
	return 0;
}
