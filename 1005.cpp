#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, k, w, a, b;
	int buildt[1005], line[1005], dp[1005];
	vector<int> v[1005];
	queue<int> q;

	cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i = 1; i <= n; i++) {
			cin >> buildt[i];
			line[i] = 0;
			dp[i] = 0;
		}
		for (int i = 0; i < k; i++) {
			cin >> a >> b;
			line[b]++;
			v[a].push_back(b);
		}
		cin >> w;

		for (int i = 1; i <= n; i++) {
			if (line[i] == 0) {
				dp[i] = buildt[i];
				q.push(i);
			}
		}
		for (int i = 0; i < n; i++) {
			a = q.front();
			q.pop();
			for (int j = 0; j < v[a].size(); j++) {
				b = v[a].at(j);
				dp[b] = max(dp[b], dp[a] + buildt[b]);
				if (--line[b] == 0) {
					q.push(b);
				}
			}
		}

		cout << dp[w] << "\n";
		for (int i = 1; i <= n; i++) {
			v[i].clear();
		}
		while (!q.empty()) {
			q.pop();
		}
	}

	return 0;
}
