#include <iostream>
using namespace std;

int bingo[30][3];
bool check[7][7] = { false, };

int checkbingo() {
	int c = 0;

	for (int i = 0; i < 5; i++) {
		if ((check[i][0]) && (check[i][1]) && (check[i][2]) && (check[i][3]) && (check[i][4])) {
			c++;
		}
	}
	for (int i = 0; i < 5; i++) {
		if ((check[0][i]) && (check[1][i]) && (check[2][i]) && (check[3][i]) && (check[4][i])) {
			c++;
		}
	}
	if ((check[0][0]) && (check[1][1]) && (check[2][2]) && (check[3][3]) && (check[4][4])) {
		c++;
	}
	if ((check[0][4]) && (check[1][3]) && (check[2][2]) && (check[3][1]) && (check[4][0])) {
		c++;
	}

	return c;
}

int main() {
	int i, n, cnt = 0, ans;
	bool b = false;

	for (i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> n;
			bingo[n][0] = i;
			bingo[n][1] = j;
		}
	}

	for (i = 0; i < 25; i++) {
		cin >> n;
		check[bingo[n][0]][bingo[n][1]] = true;
		if (b) {
			continue;
		}
		if (i > 10) {
			cnt = checkbingo();
		}
		if (cnt >= 3) {
			ans = i;
			b = true;
		}
	}

	cout << ans + 1;

	return 0;
}
