#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int m, n, k, lx, ly, rx, ry, cnt, y, x;
	bool grid[105][105];
	bool visit[105][105];
	queue<pair<int, int>> q;
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };
	vector<int> ans;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> m >> n >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			grid[i][j] = 0;
			visit[i][j] = false;
		}
	}
	while (k--) {
		cin >> lx >> ly >> rx >> ry;
		
		for (int i = ly; i < ry; i++) {
			for (int j = lx; j < rx; j++) {
				grid[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 0) {
				q.push({ i,j });
				visit[i][j] = true;
				cnt = 0;

				while (!q.empty()) {
					y = q.front().first;
					x = q.front().second;
					q.pop();
					grid[y][x] = 1;
					cnt++;

					for (int p = 0; p < 4; p++) {
						if ((y + dy[p] >= 0) && (y + dy[p] < m) && (x + dx[p] >= 0) && (x + dx[p] < n)) {
							if ((grid[y + dy[p]][x + dx[p]] == 0) && (visit[y + dy[p]][x + dx[p]] == false)) {
								q.push({ y + dy[p],x + dx[p] });
								visit[y + dy[p]][x + dx[p]] = true;
							}
						}
					}
				}

				ans.push_back(cnt);
			}
		}
	}
	sort(ans.begin(), ans.end());

	cout << ans.size() << "\n";
	for (int i = 0; i < ans.size(); i++) {
		cout << ans.at(i) << " ";
	}

	return 0;
}
