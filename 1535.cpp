#include <iostream>
using namespace std;

int main() {
	int n, h = 100;
	int l[21], j[21], joy[101] = { 0, };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> l[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> j[i];
	}
	
	for (int i = 0; i < n; i++) {
		for (int k = 99; k >= l[i]; k--) {
			joy[k] = max(joy[k], (joy[k - l[i]] + j[i]));
		}
	}

	cout << joy[99];

	return 0;
}
