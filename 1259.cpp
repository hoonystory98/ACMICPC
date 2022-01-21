#include <iostream>
#include <cstring>
using namespace std;

#define MAXSIZE 100000

int ispalindrome(char *a, int n){
	int s=0 , e=n, i, c=1;
	
	while((s+1)<e){
		if(a[s]==a[(e-1)]){
			s++;
			e--;
		}
		else{
			c=0;
			break;
		}
	}
	
	return c;
}

int main(){
	int n=0, i;
	int c[MAXSIZE]={0,};
	char a[6];
	
	cin >> a;
	
	while(a[0] != '0'){
		c[n]=ispalindrome(a, strlen(a));
		n++;
		cin >> a;
	}
	
	for(i=0; i<n; i++){
		if(c[i])
			cout << "yes\n";
		else
			cout << "no\n";
	}
	
	return 0;
}
