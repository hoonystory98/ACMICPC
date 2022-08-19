#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> board;

int bomboni() {
	int cnt, tmp = 1;

	for (int i = 0; i < n; i++) {
		cnt = 1;
		for (int j = 1; j < n; j++) {
			if (board[i][j] == board[i][j - 1]) {
				cnt++;
			}
			else {
				tmp = max(cnt, tmp);
				cnt = 1;
			}
		}
		tmp = max(cnt, tmp);
		cnt = 1;
		for (int j = 1; j < n; j++) {
			if (board[j][i] == board[j - 1][i]) {
				cnt++;
			}
			else {
				tmp = max(cnt, tmp);
				cnt = 1;
			}
		}
		tmp = max(cnt, tmp);
	}

	return tmp;
}

int main() {
	int ans = 1;
	string s;
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		board.push_back(s);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < 4; k++) {
				if ((i + dy[k] >= 0) && (i + dy[k] < n) && (j + dx[k] >= 0) && (j + dx[k] < n)) {
					if ((board[i][j] != board[i + dy[k]][j + dx[k]])) {
						swap(board[i][j], board[i + dy[k]][j + dx[k]]);
						ans = max(ans, bomboni());
						swap(board[i][j], board[i + dy[k]][j + dx[k]]);
					}
				}
			}
		}
	}

	cout << ans;

	return 0;
}
