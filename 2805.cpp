#include <iostream>
using namespace std;

#define MAXSIZE 1000005
#define MAXHEIGHT 1000000000

long long t[MAXSIZE];

int main() {
	int n, i;
	long long m, l = 0, r = MAXHEIGHT, sum, mid;

	cin >> n >> m;

	for (i = 0; i < n; i++) {
		cin >> t[i];
	}

	while (l <= r) {
		mid = (l + r) / 2;
		sum = 0;

		for (i = 0; i < n; i++) {
			sum += ((t[i] > mid) ? (t[i] - mid) : (0));
		}

		if (sum >= m) {
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}

	cout << r;

	return 0;
}
