#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, y, z, l, r, m;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> x >> y;
	z = (y * 100) / x;

	if (z >= 99) {
		cout << -1;
	}
	else {
		l = 1;
		r = 1e9;
		while (l + 1 < r) {
			m = (l + r) / 2;
			if ((y + m) * 100 / (x + m) > z) {
				r = m;
			}
			else {
				l = m;
			}
		}
		if ((y + l) * 100 / (x + l) > z) {
			cout << l;
		}
		else {
			cout << r;
		}
	}	

	return 0;
}
