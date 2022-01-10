#include <iostream>
#include <queue>
using namespace std;

#define MAXSIZE 51

int farm[MAXSIZE][MAXSIZE];
int Y[] = { -1, 0, 0, 1 };
int X[] = { 0, -1, 1, 0 };
queue<pair<int, int>> q;

int main() {
	int t, m, n, k, i, j, x, y, d, cnt = 0;

	cin >> t;

	while (t) {
		cin >> m >> n >> k;

		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				farm[i][j] = 1;
			}
		}

		for (i = 0; i < k; i++) {
			cin >> x >> y;

			farm[y + 1][x + 1] = 2;
		}

		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				if (farm[i][j] == 2) {
					q.push({ i,j });
					farm[i][j] = 1;

					while (q.size()) {
						x = q.front().second;
						y = q.front().first;
						q.pop();

						for (d = 0; d < 4; d++) {
							if (farm[y + Y[d]][x + X[d]] == 2) {
								q.push({ y + Y[d], x + X[d] });
								farm[y + Y[d]][x + X[d]] = 1;
							}
						}
					}

					cnt++;
				}
			}
		}

		cout << cnt << '\n';

		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				farm[i][j] = 0;
			}
		}
		cnt = 0;

		t--;
	}
	
	return 0;
}
