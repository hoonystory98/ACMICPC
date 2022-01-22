#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int n, m = -1;
	string s, b;
	map<string, int> sell;
	multimap<string, int> book;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		sell.insert({ s,i });
		book.insert({ s,i });
	}

	for (auto it = sell.begin(); it != sell.end(); it++) {
		if ((int)book.count(it->first) > m) {
			m = book.count(it->first);
			b = it->first;
		}
	}

	cout << b;

	return 0;
}
