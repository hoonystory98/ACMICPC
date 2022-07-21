#include <bits/stdc++.h>
using namespace std;

int n, m;
bool summit;
int farm[105][75];
bool check[105][75];

void peaks(int y, int x) {
	int dy[] = { -1,-1,-1,0,0,1,1,1 };
	int dx[] = { -1,0,1,-1,1,-1,0,1 };

	for (int i = 0; i < 8; i++) {
		if ((y + dy[i] >= 0) && (y + dy[i] < n) && (x + dx[i] >= 0) && (x + dx[i] < m)) {
			if (farm[y][x] == farm[y + dy[i]][x + dx[i]]) {
				if (check[y + dy[i]][x + dx[i]] != true) {
					check[y + dy[i]][x + dx[i]] = true;
					peaks(y + dy[i], x + dx[i]);
				}
			}
			else if (farm[y][x] < farm[y + dy[i]][x + dx[i]]) {
				summit = false;
			}
		}
	}
}

int main() {
	int ans = 0;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> farm[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (check[i][j] != true) {
				summit = true;
				check[i][j] = true;
				peaks(i, j);
				if (summit) {
					ans++;
				}
			}
		}
	}

	cout << ans;

	return 0;
}
