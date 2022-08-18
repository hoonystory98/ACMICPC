#include <iostream>
using namespace std;

int main() {
	int t, sum, m;
	int num[8];

	cin >> t;
	while (t--) {
		sum = 0;
		m = 102;
		for (int i = 0; i < 7; i++) {
			cin >> num[i];
			if ((num[i] % 2) == 0) {
				sum += num[i];
				m = min(m, num[i]);
			}
		}

		cout << sum << " " << m << "\n";
	}

	return 0;
}
