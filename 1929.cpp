#include <cstdio>
using namespace std;

int isprime(int a){
	int i, c=1;
	
	if(a==1)
		c=0;
	else{
		for(i=2; (i*i)<=a; i++){
			if(!(a%i)){
				c=0;
				break;
			}
		}
	}
	
	return c;
}

int main(){
	int m, n, i;
	
	scanf("%d %d",&m,&n);
	
	for(i=m; i<=n; i++){
		if(isprime(i))
			printf("%d\n",i);
	}
	
	return 0;
}
