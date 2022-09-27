#include <bits/stdc++.h>
using namespace std;

int main() {
	int test_case, n, ans;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> test_case;

	while (test_case--) {
		cin >> n;
		ans = n;
		while (n != 1) {
			if (n % 2) {
				n = (n * 3) + 1;
			}
			else {
				n /= 2;
			}
			ans = max(ans, n);
		}

		cout << ans << "\n";
	}

	return 0;
}
