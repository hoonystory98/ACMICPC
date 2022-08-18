#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, w, h;
	double p, t;

	cin >> n >> w >> h;
	p = sqrt((w * w) + (h * h));
	for (int i = 0; i < n; i++) {
		cin >> t;
		if (t <= p) {
			cout << "DA\n";
		}
		else {
			cout << "NE\n";
		}
	}

	return 0;
}
