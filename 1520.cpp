#include <iostream>
#include <queue>
using namespace std;

int m, n;
long long cnt = 0;
int maze[505][505];
int path[505][505];
int dy[] = { -1,1,0,0 };
int dx[] = { 0,0,-1,1 };
queue<pair<int, int>> q;

int bfs(int y, int x) {
	if ((y == (m - 1)) && (x == (n - 1))) {
		return 1;
	}
	else if (path[y][x] == (-1)) {
		path[y][x] = 0;
		for (int i = 0; i < 4; i++) {
			if ((y + dy[i] >= 0) && (y + dy[i] < m) && (x + dx[i] >= 0) && (x + dx[i] < n)) {
				if (maze[y + dy[i]][x + dx[i]] < maze[y][x]) {
					path[y][x] += bfs(y + dy[i], x + dx[i]);
				}
			}
		}
	}

	return path[y][x];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> maze[i][j];
			path[i][j] = -1;
		}
	}

	cout << bfs(0, 0);

	return 0;
}
