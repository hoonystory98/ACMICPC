#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x;

	while (cin >> x >> n) {
		cout << (n / (x + 1)) << "\n";
	}

	return 0;
}
