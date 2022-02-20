#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sudoku[9][9];
int anscnt;
vector<pair<int, int>> blank;

bool anscheck(int y, int x) {
	int r, c;

	for (int i = 0; i < 9; i++) {
		if (sudoku[y][x] == sudoku[y][i]) {
			if (i == x) {
				continue;
			}
			else {
				return false;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (sudoku[y][x] == sudoku[i][x]) {
			if (i == y) {
				continue;
			}
			else {
				return false;
			}
		}
	}

	r = (y / 3) * 3;
	c = (x / 3) * 3;
	for (int i = r; i < (r + 3); i++) {
		for (int j = c; j < (c + 3); j++) {
			if (sudoku[i][j] == 0) {
				continue;
			}
			else {
				if (sudoku[y][x] == sudoku[i][j]) {
					if ((i == y) && (j == x)) {
						continue;
					}
					else {
						return false;
					}
				}
			}
		}
	}

	return true;
}

void putans(int cnt) {
	if (cnt == anscnt) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << sudoku[i][j] << " ";
			}
			cout << "\n";
		}

		exit(0);
	}
	else {
		for (int i = 1; i <= 9; i++) {
			sudoku[blank.at(cnt).first][blank.at(cnt).second] = i;
			if (anscheck(blank.at(cnt).first, blank.at(cnt).second)) {
				putans(cnt + 1);
			}
			sudoku[blank.at(cnt).first][blank.at(cnt).second] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> sudoku[i][j];
			if (sudoku[i][j] == 0) {
				blank.push_back({ i,j });
			}
		}
	}
	anscnt = blank.size();

	putans(0);

	return 0;
}
