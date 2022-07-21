#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, m, num, cnta, cntb;
	map<int, int> a;
	map<int, int> b;

	cin >> n >> m;
	cnta = n;
	cntb = m;
	for (int i = 0; i < n; i++) {
		cin >> num;
		a.insert({ num,i });
	}
	for (int i = 0; i < m; i++) {
		cin >> num;
		b.insert({ num,i });
	}

	for (auto it = b.begin(); it != b.end(); it++) {
		if (a.find(it->first) != a.end()) {
			cnta--;
		}
	}
	for (auto it = a.begin(); it != a.end(); it++) {
		if (b.find(it->first) != b.end()) {
			cntb--;
		}
	}

	cout << cnta + cntb;

	return 0;
}
