#include <iostream>
using namespace std;

int main(){
	int h, m;
	
	cin >> h >> m;
	
	if(m < 45)
		cout << ((h==0)?(23):(h-1)) << " " << m+15;
	else
		cout << h << " " << m-45;
 
	return 0;
}
