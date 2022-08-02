#include <iostream>
using namespace std;

int main() {
	int n, ans, sum = 0, m = 101;

	for (int i = 0; i < 10; i++) {
		cin >> n;
		sum += n;
		if (m >= abs(100 - sum)) {
			m = abs(100 - sum);
			ans = sum;
		}
	}

	cout << ans;

	return 0;
}
