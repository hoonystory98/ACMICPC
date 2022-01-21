#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define MAXSIZE 20005

int main() {
	int n, l;
	string s;
	vector<pair<int, string>> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back({ s.length(), s });
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		if ((i < n - 1) && (v.at(i).second == v.at(i + 1).second)) {
			continue;
		}
		else {
			cout << v.at(i).second << "\n";
		}
	}

	return 0;
}
