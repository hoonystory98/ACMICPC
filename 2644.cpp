#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, a, b, m, x, y, cnt;
	bool edge[105][105] = { 0, };
	bool visit[105][105];
	queue<pair<int, int>> q;

	cin >> n;
	cin >> a >> b;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		edge[x][y] = 1;
		edge[y][x] = 1;
		visit[y][x] = false;
		visit[x][y] = false;
	}

	q.push({ a,0 });
	while (!q.empty()) {
		a = q.front().first;
		cnt = q.front().second;
		q.pop();
		if (a == b) {
			cout << cnt;

			return 0;
		}

		for (int i = 1; i <= n; i++) {
			if ((edge[a][i] == 1) && (visit[a][i] == false)) {
				q.push({ i,cnt + 1 });
				visit[a][i] = true;
				visit[i][a] = true;
			}
		}
	}

	cout << -1;

	return 0;
}
