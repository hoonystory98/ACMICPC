#include <iostream>
using namespace std;

int main(){
	int i,con=0;
	int input[10],rest[50]={0,};
	
	for(i=0; i<10; i++){
		cin >> input[i];
		
		if((rest[(input[i]%42)])==0){
			con++;
			rest[(input[i]%42)]++;
		}
	}
	
	cout << con;
	
	return 0;
}
