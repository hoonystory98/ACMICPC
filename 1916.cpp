#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int ans = 2e9;
int d[1005];
vector<pair<int, int>> edges[1005];
bool visit[1005][1005];

void dijkstra(int start, int end) {
	int cost, node, v, w;
	priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

	if (start == end) {
		ans = 0;
	}
	else {
		pq.push({ 0,start });

		while (!pq.empty()) {
			cost = pq.top().first;
			node = pq.top().second;
			pq.pop();

			if (d[node] < cost) {
				continue;
			}
			for (int i = 0; i < edges[node].size(); i++) {
				v = edges[node].at(i).first;
				w = edges[node].at(i).second;

				if (d[v] > (cost + w)) {
					d[v] = cost + w;
					pq.push({ d[v],v });
				}
			}
		}

		ans = d[end];
	}
}

int main() {
	int n, m, u, v, w;
	const int inf = 2e9;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> u >> v >> w;
		edges[u].push_back({ v,w });
	}
	cin >> u >> v;
	for (int i = 1; i <= n; i++) {
		d[i] = inf;
	}

	dijkstra(u, v);

	cout << ans;

	return 0;
}
