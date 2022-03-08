#include <iostream>
using namespace std;

int main() {
	int t, n, m;
	long long ans;
	long long dp[35][35] = { 0, };

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 1; i <= 30; i++) {
		dp[1][i] = i;
	}
	for (int i = 2; i <= 30; i++) {
		for (int j = 1; j <= 30; j++) {
			for (int k = 1; k < j; k++) {
				dp[i][j] += dp[i - 1][k];
			}
		}
	}

	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << dp[n][m] << "\n";
	}

	return 0;
}
