#include <iostream>
using namespace std;

int main() {
	int n, a, b, c, max = 0;
	bool incln = false;
	int hill[1005];

	cin >> n;
	cin >> hill[0];
	for (int i = 1; i < n; i++) {
		cin >> hill[i];

		if (hill[i] > hill[(i - 1)]) {
			if (incln) {
				b = hill[i];
			}
			else {
				a = hill[(i - 1)];
				b = hill[i];
				incln = true;
			}
		}
		else {
			if (incln) {
				c = b - a;
				if (c > max) {
					max = c;
				}
				incln = false;
			}
		}
	}
	if (incln) {
		c = b - a;
		if (c > max) {
			max = c;
		}
	}

	cout << max;

	return 0;
}
