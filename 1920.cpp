#include <iostream>
#include <algorithm>
using namespace std;

#define MAXSIZE 100005

int bfind(int x, int s);

int a[MAXSIZE];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, i, m, b;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);

	cin >> m;
	for (i = 0; i < m; i++) {
		cin >> b;

		cout << bfind(b, n) << "\n";
	}

	return 0;
}

int bfind(int x, int s) {
	int m, l = 0, r = s - 1;

	while (l <= r) {
		m = (l + r) / 2;
		if (a[m] == x) {
			return 1;
		}
		else if (a[m] > x) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}

	return 0;
}
