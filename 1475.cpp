#include <iostream>
using namespace std;

int main(){
	int i, m=0;
	int s[10]={0,};
	char n[8];
	
	cin >> n;
	
	for(i=0; i<sizeof(n); i++){
		if((n[i]=='6') || (n[i]=='9')){
			if(s[6] < s[9])
				s[6]++;
			else if(s[6] > s[9])
				s[9]++;
			else
				s[(int)n[i]-48]++;
		}
		else
			s[(int)n[i]-48]++;
	}
	
	for(i=0; i<10; i++){
		if(s[i] > m)
			m=s[i];
	}
	
	cout << m;
	
	return 0;
}
