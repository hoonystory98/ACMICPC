#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n, p, k, par, cnt = 0;
	vector<int> v[55];
	queue<int> q;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p;
		if (p == (-1)) {
			q.push(i);
		}
		else {
			v[p].push_back(i);
		}
	}
	cin >> k;

	while (!q.empty()) {
		par = q.front();
		q.pop();
		if (par == k) {
			continue;
		}
		else {
			if (v[par].empty()) {
				cnt++;
			}
			else {
				for (int i = 0; i < v[par].size(); i++) {
					if (v[par].at(i) == k) {
						v[par].erase(v[par].begin() + i);
						if (v[par].empty()) {
							cnt++;
						}
						else {
							i--;
						}
					}
					else {
						q.push(v[par].at(i));
					}
				}
			}
		}
	}

	cout << cnt;

	return 0;
}
