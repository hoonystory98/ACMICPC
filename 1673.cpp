#include <iostream>
using namespace std;

int main() {
	long long n, k, c;

	while (cin >> n >> k) {
		c = n;

		while (n >= k) {
			n -= (k - 1);
			c++;
		}

		cout << c << "\n";
	}

	return 0;
}
