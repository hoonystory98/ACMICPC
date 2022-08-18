#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if (a % b) {
		return gcd(b, (a % b));
	}
	else {
		return b;
	}
}

int main() {
	int n, num, g;
	vector<int> v;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	for (int i = 1; i < n; i++) {
		g = gcd(max(v[0], v[i]), min(v[0], v[i]));
		cout << (v[0] / g) << "/" << (v[i] / g) << "\n";
	}

	return 0;
}
