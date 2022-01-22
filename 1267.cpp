#include <iostream>
using namespace std;

int main() {
	int n, y = 0, m = 0;
	int call[25];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> call[i];
		y += ((call[i] / 30) * 10) + ((call[i] % 30 >= 0) * 10);
		m += ((call[i] / 60) * 15) + ((call[i] % 60 >= 0) * 15);
	}

	if (y == m) {
		cout << "Y M " << y;
	}
	else if (y < m) {
		cout << "Y " << y;
	}
	else {
		cout << "M " << m;
	}

	return 0;
}
