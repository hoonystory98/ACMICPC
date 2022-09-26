#include <iostream>
using namespace std;

int main() {
	int test, n;
	long long two, five;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> test;
	while (test--) {
		cin >> n;
		two = 0;
		five = 0;

		for (int i = 2; i <= n; i *= 2) {
			two += (n / i);
		}
		for (int i = 5; i <= n; i *= 5) {
			five += (n / i);
		}

		cout << min(two, five) << "\n";
	}

	return 0;
}
