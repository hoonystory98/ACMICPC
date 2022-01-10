#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	long long x, y, d, usqd, cnt = 0;
	double sqd;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		d = y - x;
		sqd = sqrt(d);
		usqd = round(sqd);

		if (sqd <= usqd) {
			cout << usqd * 2 - 1 << "\n";
		}
		else {
			cout << usqd * 2 << "\n";
		}
	}

	return 0;
}
