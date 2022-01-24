#include <iostream>
using namespace std;

int main(){
	int sh, sm, ss, eh, em, es, ch, cm, cs;
	char s[10],e[10],c[10];
	
	cin >> s >> e;
	
	sh=s[0]*10+s[1];
	sm=s[3]*10+s[4];
	ss=s[6]*10+s[7];
	
	eh=e[0]*10+e[1];
	em=e[3]*10+e[4];
	es=e[6]*10+e[7];
	
	if(es<ss){
		es+=60;
		em--;
	}
	if(em<sm){
		em+=60;
		eh--;
	}
	if(eh<sh)
		eh+=24;
	
	cout << (eh-sh)/10 << (eh-sh)%10 << ":" << (em-sm)/10 << (em-sm)%10 << ":" << (es-ss)/10 << (es-ss)%10;
	
	return 0;
}
