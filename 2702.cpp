#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int r;
	r = a % b;

	if (r == 0) {
		return b;
	}
	else {
		return gcd(b, r);
	}
}

int main() {
	int t, a, b, g;

	cin >> t;
	while (t--) {
		cin >> a >> b;
		g = gcd(max(a, b), min(a, b));
		
		cout << (a * b / g) << " " << g << "\n";
	}

	return 0;
}
