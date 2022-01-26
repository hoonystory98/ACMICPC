#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
int dist[1005][1005];
vector<pair<int, int>> road[1005];

void dijkstra(int start) {
	int cost, node, v, w;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	pq.push({ 0,start });

	while (!pq.empty()) {
		cost = pq.top().first;
		node = pq.top().second;
		pq.pop();
		if (dist[start][node] < cost) {
			continue;
		}

		for (int i = 0; i < road[node].size(); i++) {
			v = road[node].at(i).first;
			w = road[node].at(i).second;

			if (dist[start][v] > (cost + w)) {
				dist[start][v] = (cost + w);
				pq.push({ cost + w,v });
			}
		}
	}
}

int main() {
	int m, x, u, v, w, ans = -1;
	const int inf = 1e9;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m >> x;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) {
				dist[i][j] = 0;
			}
			else {
				dist[i][j] = 1e9;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		cin >> u >> v >> w;
		road[u].push_back({ v,w });
	}

	dijkstra(x);

	for (int i = 1; i <= n; i++) {
		if (i != x) {
			dijkstra(i);
			ans = max(ans, dist[i][x] + dist[x][i]);
		}
	}

	cout << ans;

	return 0;
}
