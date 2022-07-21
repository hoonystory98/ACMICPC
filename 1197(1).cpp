#include <bits/stdc++.h>
using namespace std;

int par[10005];
bool chk;
vector<pair<int, pair<int, int>>> edge;

int pfind(int u) {
	if (u == par[u]) {
		return u;
	}
	else {
		return par[u] = pfind(par[u]);
	}
}

void merge(int u, int v) {
	chk = false;
	u = pfind(u);
	v = pfind(v);

	if (u == v) {
		return;
	}
	else {
		par[u] = v;
		chk = true;
	}
}

int main() {
	int v, e, a, b, c, ans = 0;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> v >> e;
	for (int i = 1; i <= v; i++) {
		par[i] = i;
	}
	for (int i = 0; i < e; i++) {
		cin >> a >> b >> c;
		edge.push_back({ c,{a,b} });
	}
	sort(edge.begin(), edge.end());

	for (int i = 0; i < e; i++) {
		merge(edge[i].second.first, edge[i].second.second);

		if (chk) {
			ans += edge[i].first;
		}
	}

	cout << ans;

	return 0;
}
