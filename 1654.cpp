#include <iostream>
using namespace std;

#define MAXSIZE 10005

int main() {
	int k, n;
	long long t[MAXSIZE];
	long long l = 1, r = -1, sum, mid;

	cin >> k >> n;

	for (int i = 0; i < k; i++) {
		cin >> t[i];
		r = max(r, t[i]);
	}

	while (l <= r) {
		mid = (l + r) / 2;
		sum = 0;

		for (int i = 0; i < k; i++) {
			sum += t[i] / mid;
		}

		if (sum >= n) {
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}

	cout << r;

	return 0;
}
