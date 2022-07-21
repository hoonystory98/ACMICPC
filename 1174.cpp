#include <bits/stdc++.h>
using namespace std;

bool check[10] = { false, };
vector<pair<int, string>> v;

void backtr(int maxsize, int vsize, int start) {
	if (vsize == maxsize) {
		string s;
		for (int i = 9; i >= 0; i--) {
			if (check[i]) {
				s += (char)('0' + i);
			}
		}
		v.push_back({ vsize, s });
	}
	else {
		for (int i = start; i < 10; i++) {
			if (check[i] == false) {
				check[i] = true;
				backtr(maxsize, vsize + 1, i + 1);
				check[i] = false;
			}
		}
	}
}

int main() {
	int n;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 1; i <= 10; i++) {
		backtr(i, 0, 0);
	}
	sort(v.begin(), v.end());

	cin >> n;
	n--;
	if (n >= v.size()) {
		cout << -1;
	}
	else {
		cout << v.at(n).second;
	}

	return 0;
}
