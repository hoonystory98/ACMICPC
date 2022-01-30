#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, cnt, x, y;
	bool board[505][505];
	queue<pair<int, int>> q;
	vector<int> ans;
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (board[i][j] == 1) {
				q.push({ i,j });
				board[i][j] = 0;
				cnt = 0;

				while (!q.empty()) {
					y = q.front().first;
					x = q.front().second;
					q.pop();

					for (int k = 0; k < 4; k++) {
						if ((y + dy[k] > 0) && (y + dy[k] <= n) && (x + dx[k] > 0) && (x + dx[k] <= m)){
							if (board[(y + dy[k])][(x + dx[k])] == 1) {
								q.push({ y + dy[k] , x + dx[k] });
								board[(y + dy[k])][(x + dx[k])] = 0;
							}
						}
					}
					cnt++;
				}
				ans.push_back(cnt);
			}
		}
	}
	sort(ans.begin(), ans.end());

	if (ans.size()) {
		cout << ans.size() << "\n" << ans.back();
	}
	else {
		cout << 0 << "\n" << 0;
	}

	return 0;
}
