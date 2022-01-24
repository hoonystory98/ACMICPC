#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt = 0;
	bool change = 1;
	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (change) {
			if (s[i] != s[(i + 1)]) {
				change = 0;
			}
		}
		else {
			if ((s[i] != s[(i + 1)]) || (i == s.length() - 1)) {
				cnt++;
				change = 1;
			}
		}
	}

	cout << cnt;

	return 0;
}
