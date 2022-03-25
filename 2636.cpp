#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

#define MAXSIZE 105

bool cheese[MAXSIZE][MAXSIZE];
bool check[MAXSIZE][MAXSIZE];
int Y[] = { -1, 0, 0, 1 };
int X[] = { 0, -1, 1, 0 };
queue<pair<int, int>> q;

int allmelt(int n, int m) {
	int cnt = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (cheese[i][j]) {
				cnt++;
			}
		}
	}

	return cnt;
}

void init(int n, int m) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			check[i][j] = false;
		}
	}
}

int main() {
	int n, m, k, x, y, hour = 0, cnt = 0;

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> cheese[i][j];
		}
	}

	do {
		cnt = allmelt(n, m);
		if (cnt == 0) {
			break;
		}
		init(n, m);

		q.push({ 1, 1 });
		check[1][1] = true;

		while (q.size()) {
			x = q.front().second;
			y = q.front().first;
			q.pop();

			for (k = 0; k < 4; k++) {
				if ((y + Y[k] < 0) || (y + Y[k] > n) || (x + X[k] < 0) || (x + X[k] > m)) {
					continue;
				}
				else if ((cheese[y + Y[k]][x + X[k]] == false) && (check[y + Y[k]][x + X[k]] == false)) {
					q.push({ y + Y[k], x + X[k] });
					check[(y + Y[k])][(x + X[k])] = true;
				}
				else if ((cheese[y + Y[k]][x + X[k]] == true) && (check[y + Y[k]][x + X[k]] == false)) {
					cheese[(y + Y[k])][(x + X[k])] = false;
					check[(y + Y[k])][(x + X[k])] = true;
				}
			}
		}
		hour++;
	} while (allmelt(n, m));
	
	cout << hour << "\n" << cnt;

	return 0;
}
