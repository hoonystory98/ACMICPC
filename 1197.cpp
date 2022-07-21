#include <bits/stdc++.h>
using namespace std;

int main() {
	int v, e, a, b, c, ans = 0;
	bool visit[10005] = { false, };
	vector<pair<int, int>> edge[10005];
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> v >> e;
	for (int i = 0; i < e; i++) {
		cin >> a >> b >> c;
		edge[a].push_back({ b,c });
		edge[b].push_back({ a,c });
	}

	a = 1;
	visit[a] = true;
	for (int i = 0; i < edge[a].size(); i++) {
		pq.push({ edge[a][i].second,edge[a][i].first });
	}
	while (!pq.empty()) {
		c = pq.top().first;
		b = pq.top().second;
		pq.pop();

		if (visit[b] == true) {
			continue;
		}
		else {
			visit[b] = true;
			ans += c;

			for (int i = 0; i < edge[b].size(); i++) {
				pq.push({ edge[b][i].second,edge[b][i].first });
			}
		}
	}

	cout << ans;

	return 0;
}
