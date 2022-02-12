#include <iostream>
using namespace std;

int main(){
	int h, m, s, t;
	
	cin >> h >> m >> s >> t;
	
	s+=t;
	
	if(!(s<60)){
		m+=(s/60);
		s%=60;
	}
	if(!(m<60)){
		h+=(m/60);
		m%=60;
	}
	while(!(h<24))
		h-=24;
		
	cout << h << " " << m << " " << s;
	
	return 0;
}
