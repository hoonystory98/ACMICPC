#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int w, h, n, cn, mw = -1, mh = -1;
	bool p;
	vector<int> cw;
	vector<int> ch;

	cin >> w >> h;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p;
		if (p) {
			cin >> cn;
			ch.push_back(cn);
		}
		else {
			cin >> cn;
			cw.push_back(cn);
		}
	}
	ch.push_back(0);
	ch.push_back(w);
	cw.push_back(0);
	cw.push_back(h);

	sort(ch.begin(), ch.end());
	sort(cw.begin(), cw.end());
	for (int i = 1; i < ch.size(); i++) {
		mh = max(mh, (ch.at(i) - ch.at(i - 1)));
	}
	for (int i = 1; i < cw.size(); i++) {
		mw = max(mw, (cw.at(i) - cw.at(i - 1)));
	}

	cout << mh * mw;

	return 0;
}
