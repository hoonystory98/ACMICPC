#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n, m, cnt = 0;
	string s;
	map<string, int> dd;
	map<string, int> dbj;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> s;
		dd.insert({ s, i });
	}
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (dd.find(s) != dd.end()) {
			dbj.insert({ s, i });
			cnt++;
		}
	}

	cout << cnt << "\n";
	for (auto it = dbj.begin(); it != dbj.end(); it++) {
		cout << it->first << "\n";
	}

	return 0;
}
