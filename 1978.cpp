#include <iostream>
using namespace std;

int itsprime(int n);

int main() {
	int i, t, n, p=0;

	cin >> t;

	for (i = 0; i < t; i++) {
		cin >> n;
		if (n > 1)
			p += itsprime(n);
	}

	cout << p;

	return 0;
}

int itsprime(int n) {
	int i = 2;
	for (i; i < n; i++) {
		if (n%i == 0)
			return 0;
	}
	return 1;
}
