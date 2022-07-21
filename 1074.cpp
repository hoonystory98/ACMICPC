#include <iostream>
using namespace std;

int r, c, ans = 0;

void zvisit(int y, int x, int s) {
	if ((y == r) && (x == c)) {
		cout << ans;
		exit(0);
	}

	if (!((r <= (y + s - 1)) && (c <= (x + s - 1)))) {
		ans += (s * s);
		return;
	}

	zvisit(y, x, s / 2);
	zvisit(y, (x + s / 2), s / 2);
	zvisit((y + s / 2), x, s / 2);
	zvisit((y + s / 2), (x + s / 2), s / 2);
}

int main() {
	int n, k;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> r >> c;
	k = (1 << n);

	zvisit(0, 0, k);

	return 0;
}
