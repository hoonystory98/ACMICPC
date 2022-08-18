#include <iostream>
using namespace std;

int main() {
	int n[5];
	char a[5];

	for (int i = 0; i < 3; i++) {
		cin >> n[i];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (n[j] < n[i]) {
				swap(n[j], n[i]);
			}
		}
	}
	cin >> a;
	for (int i = 0; i < 3; i++) {
		switch (a[i]) {
		case 'A':
			cout << n[0] << " ";
			break;
		case 'B':
			cout << n[1] << " ";
			break;
		case 'C':
			cout << n[2] << " ";
			break;
		default:
			break;
		}
	}

	return 0;
}
