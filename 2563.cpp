#include <iostream>
using namespace std;

#define MAXSIZE 100

int main() {
	int n, i, xp, yp, j, k, c = 0;
	int paper[MAXSIZE][MAXSIZE] = { 0, };

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> xp >> yp;

		for (j = 0; j < 10; j++) {
			for (k = 0; k < 10; k++) {
				paper[yp + k - 1][xp + j - 1] = 1;
			}
		}
	}

	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			if (paper[i][j])
				c++;
		}
	}

	cout << c;

	return 0;
}
