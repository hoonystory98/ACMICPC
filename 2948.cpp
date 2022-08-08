#include <iostream>
using namespace std;

int main(){
	int d, m;
	
	cin >> d >> m;
	
	while(m>1){
		if(m==3){
			d+=28;
			m--;
		}
		else if(((m%2) && (m>8)) || (((m%2)==0) && (m<9))){
			d+=31;
			m--;
		}
		else{
			d+=30;
			m--;
		}
	}
	
	d%=7;
	switch(d){
		case 0:
			cout << "Wednesday";
			break;
		case 1:
			cout << "Thursday";
			break;
		case 2:
			cout << "Friday";
			break;
		case 3:
			cout << "Saturday";
			break;
		case 4:
			cout << "Sunday";
			break;
		case 5:
			cout << "Monday";
			break;
		case 6:
			cout << "Tuesday";
			break;
		default:
			break;
	}
	
	return 0;
}
