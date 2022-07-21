#include <iostream>
#include <queue>
#include <string>
using namespace std;

int agsp[105][105];
bool maze[105][105];
bool visit[105][105];

int main() {
	int n, m, cnt, y, x;
	const int inf = 10000;
	string path;
	priority_queue < pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		cin >> path;
		for (int j = 0; j < m; j++) {
			maze[i][j] = path[j] - '0';
			visit[i][j] = false;
			agsp[i][j] = inf;
		}
	}

	pq.push({ 0, { 0,0 } });
	visit[0][0] = true;
	agsp[0][0] = 0;

	while (!pq.empty()) {
		cnt = pq.top().first;
		y = pq.top().second.first;
		x = pq.top().second.second;
		pq.pop();

		if ((y == (n - 1)) && (x == (m - 1))) {
			break;
		}

		for (int i = 0; i < 4; i++) {
			if ((y + dy[i] >= 0) && (y + dy[i] < n) && (x + dx[i] >= 0) && (x + dx[i] < m)) {
				if ((visit[y + dy[i]][x + dx[i]] == false) && (agsp[y + dy[i]][x + dx[i]] > agsp[y][x])) {
					pq.push({ cnt + maze[y + dy[i]][x + dx[i]],{y + dy[i],x + dx[i]} });
					visit[y + dy[i]][x + dx[i]] = true;
					agsp[y + dy[i]][x + dx[i]] = agsp[y][x] + maze[y + dy[i]][x + dx[i]];
				}
			}
		}
	}

	cout << agsp[n - 1][m - 1];

	return 0;
}
