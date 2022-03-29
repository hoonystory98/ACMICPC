#include <iostream>
using namespace std;

const int MAX = 105;

int main() {
	int n, m;
	int a[MAX][MAX], b[MAX][MAX];

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] + b[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
