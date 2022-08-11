#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	k = 1;
	for (int i = 2; (i * i) <= n; i++) {
		if ((n % i) == 0) {
			k = (n / i);
			break;
		}
	}

	cout << n - k;

	return 0;
}
