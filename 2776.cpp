#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> note_1;
vector<int> note_2;

bool bfind(int x) {
	int l, r, m;

	l = 0;
	r = note_1.size() - 1;

	while (l <= r) {
		m = (l + r) / 2;

		if (note_1.at(m) == x) {
			return true;
		}
		else if (note_1.at(m) > x) {
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}

	return false;
}

int main() {
	int t, n, m, num, l, r;
	bool ans;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> num;
			note_1.push_back(num);
		}
		sort(note_1.begin(), note_1.end());
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> num;
			note_2.push_back(num);
		}

		for (int i = 0; i < m; i++) {
			cout << (bfind(note_2.at(i)) ? 1 : 0) << "\n";
		}

		note_1.clear();
		note_2.clear();
	}

	return 0;
}
