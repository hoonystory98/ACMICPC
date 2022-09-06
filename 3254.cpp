#include <iostream>
using namespace std;

int kimbop[10][10] = { 0, };

bool kimbopbingo(int a) {
	for (int i = 5; i >= 0; i--) {
		for (int j = 0; j < 3; j++) {
			if ((kimbop[i][j] == a) && (kimbop[i][j + 1] == a) && (kimbop[i][j + 2] == a) && (kimbop[i][j + 3] == a)) {
				return true;
			}
		}
	}

	for (int j = 0; j < 7; j++) {
		for (int i = 5; i >= 3; i--) {
			if ((kimbop[i][j] == a) && (kimbop[i - 1][j] == a) && (kimbop[i - 2][j] == a) && (kimbop[i - 3][j] == a)) {
				return true;
			}
		}
	}

	for (int i = 5; i >= 3; i--) {
		for (int j = 0; j < 4; j++) {
			if ((kimbop[i][j] == a) && (kimbop[i - 1][j + 1] == a) && (kimbop[i - 2][j + 2] == a) && (kimbop[i - 3][j + 3] == a)) {
				return true;
			}
		}
	}

	for (int i = 5; i >= 3; i--) {
		for (int j = 6; j >= 3; j--) {
			if ((kimbop[i][j] == a) && (kimbop[i - 1][j - 1] == a) && (kimbop[i - 2][j - 2] == a) && (kimbop[i - 3][j - 3] == a)) {
				return true;
			}
		}
	}

	return false;
}

int main() {
	int s, j, ans = 0, winner = 0;

	for (int i = 1; i <= 21; i++) {
		cin >> s;
		s--;

		for (int k = 5; k >= 0; k--) {
			if (kimbop[k][s] != 0) {
				continue;
			}
			else {
				kimbop[0][s] = 0;
				kimbop[k][s] = 1;
				break;
			}
		}
		if ((i >= 4) && (ans == 0)) {
			if (kimbopbingo(1)) {
				ans = i;
				winner = 1;
			}
		}

		cin >> j;
		j--;
		for (int k = 5; k >= 0; k--) {
			if (kimbop[k][j] != 0) {
				continue;
			}
			else {
				kimbop[0][j] = 0;
				kimbop[k][j] = 2;
				break;
			}
		}
		if ((i >= 4) && (ans == 0)) {
			if (kimbopbingo(2)) {
				ans = i;
				winner = 2;
			}
		}
		/*for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 7; j++) {
				cout << kimbop[i][j] << " ";
			}
			cout << "\n";
		}*/
	}
	
	switch (winner) {
	case 0:
		cout << "ss";
		break;
	case 1:
		cout << "sk " << ans;
		break;
	case 2:
		cout << "ji " << ans;
		break;
	default:
		break;
	}

	return 0;
}
