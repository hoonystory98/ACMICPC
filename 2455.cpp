#include <iostream>
using namespace std;

int main() {
	int p = 0, a, b, i = 0, max = 0;

	while (i < 4) {
		cin >> a >> b;
		p = p + b - a;
		max = ((p > max) ? p : max);
		i++;
	}

	cout << max;

	return 0;
}
