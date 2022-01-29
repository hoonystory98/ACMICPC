#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
	int an, ad, bn, bd, cn, cd;

	cin >> an >> ad >> bn >> bd;

	cd = ad * bd / gcd(ad, bd);

	cn = an * (cd / ad) + bn * (cd / bd);

	cout << cn / gcd(cn, cd) << " " << cd / gcd(cn, cd);

	return 0;
}

int gcd(int a, int b) {
	int min, max, temp;

	min = ((a < b) ? a : b);
	max = ((a > b) ? a : b);

	while (max % min) {
		temp = max;
		max = min;
		min = temp % min;
	}

	return min;
}
