#include <iostream>
using namespace std;

#define MAXSIZE 1000005

int d[MAXSIZE];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, i;

	cin >> n;

	d[1] = 0;
	for (i = 2; i <= n; i++) {
		d[i] = MAXSIZE;
	}

	for (i = 1; i <= n; i++) {
		if ((i + 1 <= n) && (d[i + 1] > d[i] + 1)) {
			d[i + 1] = d[i] + 1;
		}
		if ((i * 2 <= n) && (d[i * 2] > d[i] + 1)) {
			d[i * 2] = d[i] + 1;
		}
		if ((i * 3 <= n) && (d[i * 3] > d[i] + 1)) {
			d[i * 3] = d[i] + 1;
		}
	}

	cout << d[n];

	return 0;
}
