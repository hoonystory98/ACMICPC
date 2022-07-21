#include <bits/stdc++.h>
using namespace std;

bool ooo[10] = { false, };

bool check(int k) {
	string t;
	bool pos = true;

	t = to_string(k);
	for (int i = 0; i < t.size(); i++) {
		if (ooo[t.at(i) - '0']) {
			pos = false;
			break;
		}
	}

	return pos;
}

int main() {
	int n, m, tmp, ss, ans = 987654321;
	string s;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		ooo[tmp] = true;
	}
	s = to_string(n);
	ss = s.size();

	if (m == 10) {
		cout << abs(n - 100);
	}
	else {
		for (int i = 0; i < 1000000; i++) {
			if (check(i)) {
				tmp = i;
				s = to_string(tmp);
				ss = s.size();
				ans = min(ans, abs(tmp - n) + ss);
				if (tmp == n) {
					break;
				}
			}
		}

		cout << min(abs(n - 100), ans);
	}

	return 0;
}
