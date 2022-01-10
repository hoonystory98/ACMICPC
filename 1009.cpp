#include <iostream>
using namespace std;

#define MAXSIZE 100000

int smr(int a, int b){
	int i=1, n=a;
	
	do{
		n=n*a;
		i++;
	}while((n%10)!=(a%10));
	
	if(i==2)
		return 1;
	else if((b%(i-1))==0)
		return i-1;
	else
		return b%(i-1);
}

int pow(int a, int b){
	int i, s=1;
	
	for(i=0; i<b; i++){
		s*=a;
	}
	
	return s;
}

int main(){
	int a, b, i, n;
	int c[MAXSIZE];
	
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> a >> b;
		c[i]=pow((a%10),smr((a%10),b))%10;
	}
	
	for(i=0; i<n; i++)
		cout << ((c[i]==0)?10:c[i]) << "\n";
	
	return 0;
}
