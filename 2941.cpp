#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int i, s=0;
	string c;
	
	cin >> c;
	
	for(i=0; i<c.length(); i++){
		if(c[i]=='c'){
			if(c[i+1]=='=')
				i++;
			else if(c[i+1]=='-')
				i++;
		}
		else if(c[i]=='d'){
			if(c[i+1]=='z'){
				if(c[i+2]=='=')
					i+=2;
			}
			else if(c[i+1]=='-')
				i++;
		}
		else if(c[i]=='l'){
			if(c[i+1]=='j')
				i++;
		}
		else if(c[i]=='n'){
			if(c[i+1]=='j')
				i++;
		}
		else if(c[i]=='s'){
			if(c[i+1]=='=')
				i++;
		}
		else if(c[i]=='z'){
			if(c[i+1]=='=')
				i++;
		}
		s++;
	}
	
	cout << s;
	
	return 0;
}
