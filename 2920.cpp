#include <iostream>
using namespace std;

int main() {
	int i,m=9,n=0,a=0,d=0;
	int sound[10];

	for (i = 0; i < 8; i++)
		cin >> sound[i];

	for (i = 0; i < 8; i++) {
		if (sound[i] == (++n))
			a++;
		else if (sound[i] == (--m))
			d++;
	}

	if (a == 8)
		cout << "ascending";
	else if (d == 8)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}
