#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, p, c, r = 0;
	bool b = false;
	long long s, ns;
	long long score[55];

	cin >> n >> s >> p;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}
	sort(score, score + n, greater<>());
	score[n] = -1;

	for (int i = 0; i <= n; i++) {
		if (s == score[i]) {
			if (b) {
				continue;
			}
			else {
				r = i;
				b = true;
			}
		}
		else if (s > score[i]) {
			c = i;
			if (!b) {
				r = i;
			}
			break;
		}
	}

	if (c <= (p - 1)) {
		cout << r + 1;
	}
	else {
		cout << -1;
	}

	return 0;
}
