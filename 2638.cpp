#include <iostream>
#include <queue>
using namespace std;

int n, m;
int cheese[105][105];

bool allmelt() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (cheese[i][j]) {
				return true;
			}
		}
	}

	return false;
}

void melting() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (cheese[i][j] > 2) {
				cheese[i][j] = 0;
			}
			else if (cheese[i][j] > 0) {
				cheese[i][j] = 1;
			}
		}
	}
}

int main() {
	int y, x, cnt = 0;
	bool visit[105][105];
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };
	queue<pair<int, int>> q;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> cheese[i][j];
			visit[i][j] = false;
		}
	}

	while (allmelt()) {
		q.push({ 0,0 });
		visit[0][0] = true;

		while (!q.empty()) {
			y = q.front().first;
			x = q.front().second;
			q.pop();

			for (int i = 0; i < 4; i++) {
				if ((y + dy[i] >= 0) && (y + dy[i] < n) && (x + dx[i] >= 0) && (x + dx[i] < m)) {
					if ((visit[y + dy[i]][x + dx[i]] == false) && (cheese[y + dy[i]][x + dx[i]] == 0)) {
						q.push({ y + dy[i],x + dx[i] });
						visit[y + dy[i]][x + dx[i]] = true;
					}
					else if (visit[y + dy[i]][x + dx[i]] == false) {
						cheese[y + dy[i]][x + dx[i]]++;
					}
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				visit[i][j] = false;
			}
		}

		melting();
		cnt++;
	}
	
	cout << cnt;

	return 0;
}
