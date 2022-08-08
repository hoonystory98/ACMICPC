#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int r, c, p = 1;
	bool q;
	int rank[10] = { 0, };
	string s;
	vector<string> race;

	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		cin >> s;
		race.push_back(s);
	}

	for (int i = (c - 2); i > 0; i--) {
		q = false;
		for (int j = 0; j < r; j++) {
			if ((race[j][i] >= '0') && (race[j][i] <= '9')) {
				if (rank[race[j][i] - '0'] == 0) {
					q = true;
					rank[race[j][i] - '0'] = p;
				}
			}
		}

		if (q) {
			p++;
		}
	}

	for (int i = 1; i < 10; i++) {
		cout << rank[i] << "\n";
	}

	return 0;
}
