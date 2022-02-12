#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int>> edge[100005];

int main() {
	int n, u, v, w, curr, dist, fnode, fdist, ans;
	bool searchnd;
	bool visit[100005];
	queue<pair<int, int>> q;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		visit[i] = false;
	}
	for (int i = 0; i < n; i++) {
		cin >> u;
		cin >> v;
		while (v != (-1)) {
			cin >> w;
			edge[u].push_back({ v,w });
			cin >> v;
		}
	}

	fdist = -1;
	q.push({ 1,0 });
	visit[1] = true;

	while (!q.empty()) {
		curr = q.front().first;
		dist = q.front().second;
		q.pop();

		searchnd = true;
		for (int i = 0; i < edge[curr].size(); i++) {
			if (visit[edge[curr].at(i).first]) {
				continue;
			}
			q.push({ edge[curr].at(i).first,dist + edge[curr].at(i).second });
			visit[edge[curr].at(i).first] = true;
			searchnd = false;
		}
		if (searchnd) {
			if (dist > fdist) {
				fnode = curr;
				fdist = dist;
			}
		}
	}

	ans = -1;
	q.push({ fnode,0 });
	for (int i = 1; i <= n; i++) {
		visit[i] = false;
	}
	visit[fnode] = true;

	while (!q.empty()) {
		curr = q.front().first;
		dist = q.front().second;
		q.pop();
		ans = max(ans, dist);

		for (int i = 0; i < edge[curr].size(); i++) {
			if (visit[edge[curr].at(i).first]) {
				continue;
			}
			q.push({ edge[curr].at(i).first,dist + edge[curr].at(i).second });
			visit[edge[curr].at(i).first] = true;
		}
	}

	cout << ans;

	return 0;
}
