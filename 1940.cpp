#include <iostream>
using namespace std;

int main() {
	int n, m, cnt = 0;
	int r[15005];

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> r[i];
	}

	for (int i = 0; i < (n - 1); i++) {
		for (int j = (i + 1); j < n; j++) {
			if ((r[i] + r[j]) == m) {
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}
