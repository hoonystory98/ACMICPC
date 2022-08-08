#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, s;
	int a[32];

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 31; i++) {
		a[i] = (1 << i);
	}
	cin >> k;
	for (int i = 1; i < 31; i++) {
		if (k > a[i]) {
			k -= a[i];
		}
		else {
			s = i;
			break;
		}
	}
	k--;
	s--;
	for (int i = s; i >= 0; i--) {
		if (k & a[i]) {
			cout << "7";
		}
		else {
			cout << "4";
		}
	}

	return 0;
}
