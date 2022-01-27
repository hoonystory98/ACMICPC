#include <iostream>
using namespace std;

#define MAX_SIZE 1000

int main(){
	int n,i;
	double max=0,sum=0;
	double score[MAX_SIZE];
	
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> score[i];
		if(score[i]>max)
			max=score[i];
	}
	
	for(i=0; i<n; i++){
		score[i]=score[i]/max*100;
		sum+=score[i];
	}
	
	cout << fixed;
	cout.precision(2);
	cout << sum/(double)n << "\n";
		
	return 0;
}
