#include <iostream>
#include <string.h>
using namespace std;

#define MAXSIZE 1000000

int main(){
	int i, sl, m = -1, c;
	int a[26]={0,};
	char l;
	char S[MAXSIZE];
	
	cin >> S;
	
	sl=strlen(S);
	
	for(i=0; i<sl; i++)
		a[(S[i]>96)?(S[i]-97):(S[i]-65)]++;
	
	for(i=0; i<26; i++){
		if(a[i] > m){
			m=a[i];
			c=i;
			l=(char)(i+65);
		}
	}
	
	for(i=0; i<26; i++){
		if((a[i] == m) && (a[i] != 0) && (c!=i))
			m = -1;
	}
	
	if(m == -1)
		cout << "?";
	else
		cout << l;
	
	return 0;
}
