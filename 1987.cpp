#include <iostream>
using namespace std;

int r, c, m = 0;
char board[25][25];
bool abc[30] = { false, };
int dy[] = { -1,1,0,0 };
int dx[] = { 0,0,-1,1 };

void dfs(int y, int x, int cnt) {
	abc[(int)(board[y][x] - 'A')] = true;
	m = max(m, cnt);

	for (int i = 0; i < 4; i++) {
		if ((y + dy[i] >= 0) && (y + dy[i] < r) && (x + dx[i] >= 0) && (x + dx[i] < c)) {
			if (abc[(int)(board[y + dy[i]][x + dx[i]] - 'A')] == false) {
				dfs(y + dy[i], x + dx[i], cnt + 1);
				abc[(int)(board[y + dy[i]][x + dx[i]] - 'A')] = false;
			}
		}
	}
}

int main() {
	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		cin >> board[i];
	}

	dfs(0, 0, 1);

	cout << m;

	return 0;
}
