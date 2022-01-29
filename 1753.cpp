#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int d[20005];
vector<pair<int, int>> edges[20005];

void dijkstra(int start) {
	int cost, node, v, w;
	priority_queue<pair<int, int>> pq;
	pq.push({ 0,start });

	while (!pq.empty()) {
		cost = pq.top().first * (-1);
		node = pq.top().second;
		pq.pop();

		for (int i = 0; i < edges[node].size(); i++) {
			v = edges[node].at(i).first;
			w = edges[node].at(i).second;

			if (d[v] > (cost + w)) {
				d[v] = cost + w;
				pq.push({ -d[v],v });
			}
		}
	}
}

int main() {
	int n, e, k, u, v, w;
	const int inf = 3000005;

	cin >> n >> e;
	cin >> k;
	for (int i = 0; i < e; i++) {
		cin >> u >> v >> w;
		edges[u].push_back({ v,w });
	}

	for (int i = 1; i <= n; i++) {
		if (i == k) {
			d[i] = 0;
		}
		else {
			d[i] = inf;
		}
	}

	dijkstra(k);
	for (int i = 1; i <= n; i++) {
		if (d[i] == inf) {
			cout << "INF\n";
		}
		else {
			cout << d[i] << "\n";
		}
	}

	return 0;
}
