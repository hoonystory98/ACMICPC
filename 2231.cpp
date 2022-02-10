#include <iostream>
using namespace std;

int desplus(int a){
	int k, b = a, sum=0;
	
	while(b){
		sum += b%10;
		b/=10;
	}
	
	sum += a;
		
	return sum;
}

int main(){
	int i, c, ans;
	
	cin >> c;
	
	for(i=1; !(i>c); i++){
		if(desplus(i) == c){
			ans = i;
			break;
		}
	}
	
	if(!(i<c))
		ans=0;
	
	cout << ans;
	
	return 0;
}
