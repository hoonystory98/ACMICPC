#include <bits/stdc++.h>
using namespace std;

int dist[1005][1005];

int main() {
	int n, m, u, v, w;
	const int INF = 1e9;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j == i) {
				dist[i][j] = 0;
			}
			else {
				dist[i][j] = INF;
			}
		}
	}
	for (int i = 0; i < (n - 1); i++) {
		cin >> u >> v >> w;
		dist[u][v] = min(w, dist[u][v]);
		dist[v][u] = min(w, dist[v][u]);
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}

	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		cout << dist[u][v] << "\n";
	}

	return 0;
}
