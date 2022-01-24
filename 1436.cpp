#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int n, i, c=0;
	char s[10];
	
	cin >> n;
	
	for(i=666; c<n; i++){
		sprintf(s,"%d",i);
		if(strstr(s,"666"))
			c++;
	}
	
	cout << s;
	
	return 0;
}
