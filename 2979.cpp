#include <iostream>
using namespace std;

int main() {
	int a, b, c, arv, dep, ans = 0;
	int t[105] = { 0, };

	cin >> a >> b >> c;
	b *= 2;
	c *= 3;
	for (int i = 0; i < 3; i++) {
		cin >> arv >> dep;
		for (int j = arv; j < dep; j++) {
			t[j]++;
		}
	}

	for (int i = 0; i <= 100; i++) {
		switch (t[i]) {
		case 1:
			ans += a;
			break;
		case 2:
			ans += b;
			break;
		case 3:
			ans += c;
			break;
		default:
			break;
		}
	}

	cout << ans;

	return 0;
}
