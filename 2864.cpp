#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m;
	string a, b, fivea, sixa, fiveb, sixb;

	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '6') {
			a[i] = '5';
		}
	}
	for (int i = 0; i < b.size(); i++) {
		if (b[i] == '6') {
			b[i] = '5';
		}
	}
	fivea = a;
	fiveb = b;
	n = stoi(fivea);
	m = stoi(fiveb);
	cout << n + m << " ";

	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '5') {
			a[i] = '6';
		}
	}
	for (int i = 0; i < b.size(); i++) {
		if (b[i] == '5') {
			b[i] = '6';
		}
	}
	sixa = a;
	sixb = b;
	n = stoi(sixa);
	m = stoi(sixb);
	cout << n + m;

	return 0;
}
