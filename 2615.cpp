#include <iostream>
#include <queue>
using namespace std;

int winx, winy;
int board[25][25];
bool visit[4][25][25];

bool whowin(int t) {
	int y, x, cnt;
	queue<pair<pair<int, int>, int>> q;
	int dx[] = { 1,0,1,-1 };
	int dy[] = { 0,1,1,1 };

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			if (board[i][j] == t) {
				if ((j < 15) && (board[i][j + 1] == t) && (visit[0][i][j] == false)) {
					q.push({ {i,j},1 });
					visit[0][i][j] = true;

					while (!q.empty()) {
						y = q.front().first.first;
						x = q.front().first.second;
						cnt = q.front().second;
						q.pop();

						if ((board[y + dy[0]][x + dx[0]] == t) && (visit[0][y + dy[0]][x + dx[0]] == false)) {
							q.push({ {y + dy[0],x + dx[0]},cnt + 1 });
							visit[0][y + dy[0]][x + dx[0]] = true;
						}
					}

					if (cnt == 5) {
						winy = i + 1;
						winx = j + 1;
						return true;
					}
				}
				if ((i < 15) && (board[i + 1][j] == t) && (visit[1][i][j] == false)) {
					q.push({ {i,j},1 });
					visit[1][i][j] = true;

					while (!q.empty()) {
						y = q.front().first.first;
						x = q.front().first.second;
						cnt = q.front().second;
						q.pop();

						if ((board[y + dy[1]][x + dx[1]] == t) && (visit[1][y + dy[1]][x + dx[1]] == false)) {
							q.push({ {y + dy[1],x + dx[1]},cnt + 1 });
							visit[1][y + dy[1]][x + dx[1]] = true;
						}
					}

					if (cnt == 5) {
						winy = i + 1;
						winx = j + 1;
						return true;
					}
				}
				if ((i < 15) && (j < 15) && (board[i + 1][j + 1] == t) && (visit[2][i][j] == false)) {
					q.push({ {i,j},1 });
					visit[2][i][j] = true;

					while (!q.empty()) {
						y = q.front().first.first;
						x = q.front().first.second;
						cnt = q.front().second;
						q.pop();

						if ((board[y + dy[2]][x + dx[2]] == t) && (visit[2][y + dy[2]][x + dx[2]] == false)) {
							q.push({ {y + dy[2],x + dx[2]},cnt + 1 });
							visit[2][y + dy[2]][x + dx[2]] = true;
						}
					}

					if (cnt == 5) {
						winy = i + 1;
						winx = j + 1;
						return true;
					}
				}
				if ((i < 15) && (j >= 4) && (board[i + 1][j - 1] == t) && (visit[3][i][j] == false)) {
					q.push({ {i,j},1 });
					visit[3][i][j] = true;

					while (!q.empty()) {
						y = q.front().first.first;
						x = q.front().first.second;
						cnt = q.front().second;
						q.pop();

						if ((board[y + dy[3]][x + dx[3]] == t) && (visit[3][y + dy[3]][x + dx[3]] == false)) {
							q.push({ {y + dy[3],x + dx[3]},cnt + 1 });
							visit[3][y + dy[3]][x + dx[3]] = true;
						}
					}

					if (cnt == 5) {
						winy = i + 5;
						winx = j - 3;
						return true;
					}
				}
			}
		}
	}

	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			cin >> board[i][j];
			for (int k = 0; k < 4; k++) {
				visit[k][i][j] = false;
			}
		}
	}

	if (whowin(1)) {
		cout << 1 << "\n" << winy << " " << winx;
	}
	else if (whowin(2)) {
		cout << 2 << "\n" << winy << " " << winx;
	}
	else {
		cout << 0;
	}

	return 0;
}
