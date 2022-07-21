#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if ((a % b) == 0) {
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}

int main() {
	int n, m;

	cin >> n >> m;

	cout << m - gcd(n, m);

	return 0;
}
