#include <iostream>
#include <string>
using namespace std;

#define MAX_SIZE 10000001

int main(){
	int i, c=0;
	string a;
	
	getline(cin,a);
	
	for(i=0; i<a.size(); i++){
		if(a[i]!=' '){
			c=1;
			break;
		}
	}
	
	for(i=0; i<a.size(); i++){
		if(a[i]==' '){
			if((a[i+1] != ' ') && ((i+1)<a.size()) && (a[i-1] != ' ') && (i>0))
				c++;
		}
	}
	
	cout << c;
	
	return 0;
}
