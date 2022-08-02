#include <iostream>
using namespace std;

int main() {
	int l, p;
	int man[5];

	cin >> l >> p;
	for (int i = 0; i < 5; i++) {
		cin >> man[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << man[i] - (l * p) << " ";
	}

	return 0;
}
