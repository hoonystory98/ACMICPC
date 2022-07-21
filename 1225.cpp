#include <bits/stdc++.h>
using namespace std;

int main() {
	int tmp_a, tmp_b;
	string a, b;
	long long ans = 0;

	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		tmp_a = (a.at(i) - '0');
		for (int j = 0; j < b.size(); j++) {
			tmp_b = (b.at(j) - '0');
			ans += tmp_a * tmp_b;
		}
	}

	cout << ans;

	return 0;
}
