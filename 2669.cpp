#include <iostream>
using namespace std;

int main() {
	int ax, ay, bx, by, cnt = 0;
	bool board[105][105] = { 0, };

	for (int k = 0; k < 4; k++) {
		cin >> ax >> ay >> bx >> by;
		
		for (int i = ay; i < by; i++) {
			for (int j = ax; j < bx; j++) {
				board[i][j] = 1;
			}
		}
	}

	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			if (board[i][j]) {
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}
