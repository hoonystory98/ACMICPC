#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, m, k, y, x, cnt, ans = 0;
	bool aisle[105][105];
	bool visit[105][105];
	queue<pair<int, int>> trash;
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			aisle[i][j] = 0;
			visit[i][j] = 0;
		}
	}
	for (int i = 0; i < k; i++) {
		cin >> y >> x;
		aisle[(y - 1)][(x - 1)] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (aisle[i][j]) {
				trash.push({ i,j });
				visit[i][j] = 1;
				cnt = 0;

				while (!trash.empty()) {
					y = trash.front().first;
					x = trash.front().second;
					trash.pop();
					aisle[y][x] = 0;
					cnt++;

					for (int i = 0; i < 4; i++) {
						if ((y + dy[i] >= 0) && (y + dy[i] < n) && (x + dx[i] >= 0) && (x + dx[i] < m)) {
							if ((aisle[y + dy[i]][x + dx[i]]) && (visit[y + dy[i]][x + dx[i]] == false)) {
								trash.push({ y + dy[i],x + dx[i] });
								visit[y + dy[i]][x + dx[i]] = 1;
							}
						}
					}
				}

				ans = max(ans, cnt);
			}
		}
	}

	cout << ans;

	return 0;
}
