#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<pair<int, int>> v;
vector<int> ans;
bool visit[10];

void zappa(int size, int s, int p) {
	if (p == size) {
		int sour = 0, bitt = 1;

		for (int i = 0; i < n; i++) {
			if (visit[i]) {
				sour += v.at(i).second;
				bitt *= v.at(i).first;
			}
		}
		ans.push_back(abs(sour - bitt));
	}
	else {
		for (int i = s; i < n; i++) {
			if (visit[i] == false) {
				visit[i] = true;
				zappa(size, i + 1, p + 1);
				visit[i] = false;
			}
		}
	}
}

int main() {
	int s, b;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> b;
		v.push_back({ s,b });
		visit[i] = false;
	}

	for (int i = 1; i <= n; i++) {
		zappa(i, 0, 0);
	}
	sort(ans.begin(), ans.end());

	cout << ans.at(0);

	return 0;
}
