#include <iostream>
using namespace std;

int main() {
	int t, n;

	cin >> t;

	for (int test = 0; test < t; test++) {
		cin >> n;

		for (int i = 0; n > 0; i++) {
			if (n & 1) {
				cout << i << " ";
			}
			n = n >> 1;
		}
		cout << "\n";
	}

	return 0;
}
