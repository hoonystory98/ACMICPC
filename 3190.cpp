#include <iostream>
#include <queue>
using namespace std;

int board[110][110];

int main() {
	int n, a, c, y, x, t, rotation, size, playtime = 0;
	char cmd;
	int dy[] = { 0,1,0,-1 };
	int dx[] = { 1,0,-1,0 };
	queue<pair<int, char>> command;
	deque<pair<int, int>> dummy;

	cin >> n;
	for (int i = 0; i < (n + 2); i++) {
		board[0][i] = 1;
		board[i][0] = 1;
		board[(n + 1)][i] = 1;
		board[i][(n + 1)] = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < (n - 1); j++) {
			board[i][j] = 0;
		}
	}
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> y >> x;
		board[y][x] = 2;
	}
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> t >> cmd;
		command.push({ t,cmd });
	}

	dummy.push_back({ 1,1 });
	board[1][1] = 1;
	size = 1;
	rotation = 0;

	while (1) {
		dummy.push_back({ dummy.back().first + dy[rotation],dummy.back().second + dx[rotation] });
		if (board[dummy.back().first][dummy.back().second] == 2) {
			board[dummy.back().first][dummy.back().second] = 1;
			size++;
		}
		else {
			if (board[dummy.back().first][dummy.back().second] == 1) {
				cout << playtime + 1;
				break;
			}
			else {
				board[dummy.back().first][dummy.back().second] = 1;
			}
			if (dummy.size() > size) {
				board[dummy.front().first][dummy.front().second] = 0;
				dummy.pop_front();
			}
		}
		playtime++;
		if (command.size()) {
			if (playtime == command.front().first) {
				switch (command.front().second) {
				case 'L':
					rotation--;
					if (rotation < 0) {
						rotation += 4;
					}
					break;
				case 'D':
					rotation++;
					if (rotation >= 4) {
						rotation -= 4;
					}
					break;
				default:
					break;
				}
				command.pop();
			}
		}
	}

	return 0;
}
