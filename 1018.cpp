#include <iostream>
#include <string>
using namespace std;

string board[55];

int checkboard(int c, int r) {
	int cnt_1 = 0, cnt_2 = 0;
	string comp[] = { "WBWBWBWB","BWBWBWBW" };

	for (int i = c; i < (c + 8); i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i].substr(r, 8)[j] != comp[(i % 2)][j]) {
				cnt_1++;
			}
		}
	}
	for (int i = c; i < (c + 8); i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i].substr(r, 8)[j] != comp[(i % 2) ^ 1][j]) {
				cnt_2++;
			}
		}
	}

	return min(cnt_1, cnt_2);
}

int main() {
	int n, m, c, min = 65;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}

	for (int i = 0; i <= (n - 8); i++) {
		for (int j = 0; j <= (m - 8); j++) {
			c = checkboard(i, j);
			min = ((c < min) ? (c) : (min));
		}
	}

	cout << min;

	return 0;
}
