#include <iostream>
#include <queue>
using namespace std;

int space[105][105];

int dfs(int n, int h) {
	int y, x, cnt = 0;
	bool rain[105][105];
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };
	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			rain[i][j] = (space[i][j] > h);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (rain[i][j]) {
				q.push({ i,j });
				rain[i][j] = 0;

				while (!q.empty()) {
					y = q.front().first;
					x = q.front().second;
					q.pop();

					for (int k = 0; k < 4; k++) {
						if ((y + dy[k] < n) && (y + dy[k] >= 0) && (x + dx[k] < n) && (x + dx[k] >= 0)) {
							if (rain[(y + dy[k])][(x + dx[k])] == 1) {
								q.push({ y + dy[k],x + dx[k] });
								rain[(y + dy[k])][(x + dx[k])] = 0;
							}
						}
					}
				}

				cnt++;
			}
		}
	}

	return cnt;
}

int main() {
	int n, low = 101, high = 0, ans = 1;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> space[i][j];
			low = min(low, space[i][j]);
			high = max(high, space[i][j]);
		}
	}

	for (int i = low; i <= high; i++) {
		ans = max(ans, dfs(n, i));
	}

	cout << ans;

	return 0;
}
