#include <iostream>
#include <queue>
using namespace std;

#define MAXSIZE 105

bool a[MAXSIZE][MAXSIZE];
int c[MAXSIZE][MAXSIZE];

int main() {
	int n, m, i, j, x, y;
	queue<pair<int, int>> q;

	cin >> n >> m;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%1d", &a[i][j]);
		}
	}

	q.push({ 1, 1 });
	c[1][1] = 1;

	while (q.size()) {
		y = q.front().first;
		x = q.front().second;
		q.pop();
		
		if ((a[y - 1][x]) && (c[y - 1][x] == 0)) {
			q.push({ y - 1, x });
			c[y - 1][x] = c[y][x] + 1;
		}
		if ((a[y + 1][x]) && (c[y + 1][x] == 0)) {
			q.push({ y + 1, x });
			c[y + 1][x] = c[y][x] + 1;
		}
		if ((a[y][x - 1]) && (c[y][x - 1] == 0)) {
			q.push({ y, x - 1 });
			c[y][x - 1] = c[y][x] + 1;
		}
		if ((a[y][x + 1]) && (c[y][x + 1] == 0)) {
			q.push({ y, x + 1 });
			c[y][x + 1] = c[y][x] + 1;
		}
	}

	cout << c[n][m];

	return 0;
}
