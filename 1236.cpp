#include <iostream>
using namespace std;

int main() {
	int n, m, row = 0, col = 0;
	bool secu;
	char castle[55][55];

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		secu = true;
		for (int j = 0; j < m; j++) {
			cin >> castle[i][j];
			if (castle[i][j] == 'X') {
				secu = false;
			}
		}
		if (secu) {
			row++;
		}
	}
	for (int i = 0; i < m; i++) {
		secu = true;
		for (int j = 0; j < n; j++) {
			if (castle[j][i] == 'X') {
				secu = false;
			}
		}
		if (secu) {
			col++;
		}
	}

	cout << max(row, col);

	return 0;
}
