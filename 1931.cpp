#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, start, end, cnt = 0;
	vector<pair<int, int>> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> start >> end;
		v.push_back({ end, start });
	}

	sort(v.begin(), v.end());

	end = v.at(0).first;
	cnt++;
	for (int i = 1; i < n; i++) {
		if (v.at(i).second >= end) {
			end = v.at(i).first;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}
