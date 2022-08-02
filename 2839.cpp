#include <iostream>
using namespace std;

int main(){
	int weight,sum=0;
	
	cin >> weight;
	
	if((weight<8)&&(((weight%3)!=0)&&((weight%5)!=0)))
		cout << -1;
	else{
		sum+=weight/5;
		weight=weight%5;
		while(weight%3!=0){
			sum--;
			weight+=5;
		}
		sum+=weight/3;
		cout << sum;
	}
	
	return 0;
}
