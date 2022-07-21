#include <iostream>
using namespace std;

int main() {
	int n, ans;
	int cost[1005][5];
	int sum[1005][5];

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
	}
	sum[0][0] = cost[0][0];
	sum[0][1] = cost[0][1];
	sum[0][2] = cost[0][2];

	for (int i = 1; i < n; i++) {
		sum[i][0] = min(sum[i - 1][1], sum[i - 1][2]) + cost[i][0];
		sum[i][1] = min(sum[i - 1][2], sum[i - 1][0]) + cost[i][1];
		sum[i][2] = min(sum[i - 1][0], sum[i - 1][1]) + cost[i][2];
	}

	ans = ((sum[n - 1][0] < sum[n - 1][1]) ? ((sum[n - 1][0] < sum[n - 1][2]) ? (sum[n - 1][0]) : (sum[n - 1][2])) : ((sum[n - 1][1] < sum[n - 1][2]) ? (sum[n - 1][1]) : (sum[n - 1][2])));

	cout << ans;

	return 0;
}
