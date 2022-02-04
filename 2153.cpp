#include <iostream>
#include <cstring>
using namespace std;

int isprime(int k){
	int r;
	
	if(k==1)
		r=k;
	else{
		for(r=2; r<k; r++){
			if(k%r==0)
				break;
		}
	}
	
	if(r==k)
		return 1;
	else
		return 0;
}

int main(){
	int i, s=0;
	char a[21];
	
	cin >> a;
	
	for(i=0; i<strlen(a); i++){
		if((a[i]>64) && (a[i]<91))
			s+=(int)(a[i]-38);
		else if((a[i]>96) && (a[i]<123))
			s+=(int)(a[i]-96);
	}
	
	if(isprime(s))
		cout << "It is a prime word.";
	else
		cout << "It is not a prime word.";
	
	return 0;
}
