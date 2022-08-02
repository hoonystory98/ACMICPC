#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p, a, b, cnt = 0;
	stack<int> g[7];

	cin >> n >> p;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		while ((!(g[a].empty()) && (g[a].top() > b))) {
			g[a].pop();
			cnt++;
		}
		if ((g[a].empty()) || (g[a].top() < b)) {
			g[a].push(b);
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}
