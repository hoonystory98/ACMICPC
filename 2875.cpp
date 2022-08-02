#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, an, am, k, ans = 0;

	cin >> n >> m >> k;

	for (int i = 0; i <= k; i++) {
		an = n - i;
		am = m - (k - i);
		ans = max(ans, min(an / 2, am));
	}

	cout << ans;

	return 0;
}
