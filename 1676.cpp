#include <iostream>
using namespace std;

int main() {
	int n, t, cnt, two = 0, five = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		t = i;

		cnt = 0;
		while ((t % 2) == 0) {
			cnt++;
			t /= 2;
		}
		two += cnt;

		t = i;
		cnt = 0;
		while ((t % 5) == 0) {
			cnt++;
			t /= 5;
		}
		five += cnt;
	}

	cout << min(two, five);

	return 0;
}
