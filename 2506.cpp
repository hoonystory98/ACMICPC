#include <iostream>
using namespace std;

int main() {
	int n, c = 0, sum = 0;
	bool s[105];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];

		if (s[i]) {
			c++;
			sum += c;
		}
		else {
			c = 0;
		}
	}

	cout << sum;

	return 0;
}
