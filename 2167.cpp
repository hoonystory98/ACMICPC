#include <iostream>
using namespace std;

int arr[305][305];

int main() {
	int n, m, k, a, b, x, y, sum;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> a >> b >> x >> y;
		a--;
		b--;
		x--;
		y--;
		sum = 0;

		for (int j = a; j <= x; j++) {
			for (int k = b; k <= y; k++) {
				sum += arr[j][k];
			}
		}

		cout << sum << "\n";
	}

	return 0;
}
