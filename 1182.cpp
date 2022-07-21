#include <iostream>
using namespace std;

int n, s;
int cnt = 0;
int arr[25];
bool check[25];

void backtr(int start, int size, int msize) {
	if (size == msize) {
		int sum = 0;

		for (int i = 0; i < n; i++) {
			if (check[i]) {
				sum += arr[i];
			}
		}

		if (sum == s) {
			cnt++;
		}
	}
	else {
		for (int i = start; i < n; i++) {
			if (check[i] == false) {
				check[i] = true;
				backtr(i + 1, size + 1, msize);
				check[i] = false;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		check[i] = false;
	}

	for (int i = 1; i <= n; i++) {
		backtr(0, 0, i);
	}

	cout << cnt;

	return 0;
}
