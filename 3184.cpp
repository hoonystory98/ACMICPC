#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, c, v, o, y, x, ansv = 0, anso = 0;
	char farm[255][255];
	bool check[255][255] = { false, };
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };
	queue<pair<int, int>> q;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> r >> c;
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			cin >> farm[i][j];
		}
	}

	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			if ((check[i][j] == false) && (farm[i][j] != '#')) {
				q.push({ i,j });
				check[i][j] = true;
				v = 0;
				o = 0;

				while (!q.empty()) {
					y = q.front().first;
					x = q.front().second;
					q.pop();

					if (farm[y][x] == 'v') {
						v++;
					}
					else if (farm[y][x] == 'o') {
						o++;
					}

					for (int k = 0; k < 4; k++) {
						if ((x + dx[k] > 0) && (x + dx[k] <= c) && (y + dy[k] > 0) && (y + dy[k] <= r)) {
							if ((check[y + dy[k]][x + dx[k]] == false) && (farm[y + dy[k]][x + dx[k]] != '#')) {
								q.push({ y + dy[k],x + dx[k] });
								check[y + dy[k]][x + dx[k]] = true;
							}
						}
					}
				}

				if (o > v) {
					anso += o;
				}
				else {
					ansv += v;
				}
			}
		}
	}

	cout << anso << " " << ansv;


	return 0;
}
