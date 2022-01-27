#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, j;
	string s;

	cin >> n;

	for (int i = n; i >= 4; i--) {
		s = to_string(i);
		for (j = 0; j < s.size(); j++) {
			if ((s[j] == '4') || (s[j] == '7')) {
				continue;
			}
			else {
				break;
			}
		}
		if (j == s.size()) {
			cout << s;
			break;
		}
	}

	return 0;
}
