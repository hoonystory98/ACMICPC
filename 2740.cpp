#include <iostream>
using namespace std;

int main() {
	int n, m, k, tmp;
	int arra[105][105];
	int arrb[105][105];
	int ans[105][105];

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arra[i][j];
		}
	}
	cin >> m >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> arrb[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			tmp = 0;
			for (int p = 0; p < m; p++) {
				tmp += arra[i][p] * arrb[p][j];
			}
			cout << tmp << " ";
		}
		cout << "\n";
	}

	return 0;
}
