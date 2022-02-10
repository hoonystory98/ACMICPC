#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

#define MAXSIZE 1005

bool a[MAXSIZE][MAXSIZE];
int route[MAXSIZE][MAXSIZE];
bool check[MAXSIZE][MAXSIZE][2];

int X[] = { 0, 0, -1, 1 };
int Y[] = { -1, 1, 0, 0 };

int main() {
	int n, m, x, y, d;
	bool punch, possible = 0;
	queue<tuple<int, int, bool>> q;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%1d", &a[i][j]);
		}
	}

	q.push({ 1, 1, 0 });
	check[1][1][0] = 1;
	check[1][1][1] = 1;
	route[1][1] = 1;

	while (q.size()) {
		y = get<0>(q.front());
		x = get<1>(q.front());
		punch = get<2>(q.front());
		q.pop();

		for (int i = 0; i < 4; i++) {
			if ((y + Y[i] > 0) && (y + Y[i] <= n) && (x + X[i] > 0) && (x + X[i] <= m)) {
				if ((a[y + Y[i]][x + X[i]] == 1) && (check[y + Y[i]][x + X[i]][1] == 0) && (punch == false)) {
					check[y + Y[i]][x + X[i]][1] = 1;
					route[y + Y[i]][x + X[i]] = route[y][x] + 1;
					q.push({ y + Y[i], x + X[i], 1 });
				}
				if ((a[y + Y[i]][x + X[i]] == 0) && (check[y + Y[i]][x + X[i]][punch] == 0)) {
					check[y + Y[i]][x + X[i]][punch] = 1;
					route[y + Y[i]][x + X[i]] = route[y][x] + 1;
					q.push({ y + Y[i], x + X[i], punch });
				}
				if ((y + Y[i] == n) && (x + X[i] == m)) {
					possible = true;
					break;
				}
			}
		}
        if(possible) {
            break;
        }
	}

	
	if (!possible) {
		if ((n == 1) && (m == 1)) {
			cout << 1;
		}
		else {
			cout << -1;
		}
	}
	else {
		cout << route[n][m];
	}

	return 0;
}
