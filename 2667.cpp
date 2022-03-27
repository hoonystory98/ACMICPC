#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

#define MAXSIZE 27

char map[MAXSIZE][MAXSIZE];
int Y[] = { -1, 0, 0, 1 };
int X[] = { 0, -1, 1, 0 };
queue<pair<int, int>> q;
vector<int> ans;

int main() {
	int n, i, j, k, x, y;

	cin >> n;

	for (i = 1; i <= n; i++) {
		cin >> &map[i][1];
	}


	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (map[i][j] == '1') {
				q.push({ i, j });
				map[i][j] = '0';
				int cnt = 0;

				while (q.size()) {
					x = q.front().second;
					y = q.front().first;
					q.pop();

					for (k = 0; k < 4; k++) {
						if (map[y + Y[k]][x + X[k]] == '1') {
							q.push({ y + Y[k], x + X[k] });
							map[y + Y[k]][x + X[k]] = '0';
						}
					}
					cnt++;
				}
				ans.push_back(cnt);
			}
		}
	}

	sort(ans.begin(), ans.end());

	cout << ans.size() << '\n';

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << '\n';
	}
	
	return 0;
}
