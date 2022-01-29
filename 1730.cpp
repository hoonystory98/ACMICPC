#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, x = 0, y = 0;
	bool r[15][15] = { 0, }, c[15][15] = { 0, };
	string s;
	
	cin >> n;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		switch (s[i]) {
		case 'U':
			if (y - 1 >= 0) {
				c[y][x] = true;
				c[y - 1][x] = true;
				y--;
			}
			break;
		case 'D':
			if (y + 1 < n) {
				c[y][x] = true;
				c[y + 1][x] = true;
				y++;
			}
			break;
		case 'L':
			if (x - 1 >= 0) {
				r[y][x] = true;
				r[y][x - 1] = true;
				x--;
			}
			break;
		case 'R':
			if (x + 1 < n) {
				r[y][x] = true;
				r[y][x + 1] = true;
				x++;
			}
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (r[i][j] && c[i][j]) {
				cout << '+';
			}
			else if (r[i][j]) {
				cout << '-';
			}
			else if (c[i][j]) {
				cout << '|';
			}
			else {
				cout << '.';
			}
		}
		if (i < (n - 1)) {
			cout << "\n";
		}
	}

	return 0;
}
