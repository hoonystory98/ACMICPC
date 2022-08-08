#include <iostream>
using namespace std;

int main(){
	int i,j,m=0,w;
	int c[5]={0,}, s[5][4];
	
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			cin >> s[i][j];
			
			c[i]+=s[i][j];
		}
		if(c[i]>m){
			m=c[i];
			w=i+1;
		}
	}
	
	cout << w << " " << m;
	
	return 0;
}
