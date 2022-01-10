#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string c;
	string s[55];

	cin >> n;
	cin >> c;
	for (int i = 1; i < n; i++) {
		cin >> s[i];
		for (int j = 0; j < c.length(); j++) {
			if (c[j] != s[i][j]) {
				c[j] = '?';
			}
		}
	}

	cout << c;

	return 0;
}
