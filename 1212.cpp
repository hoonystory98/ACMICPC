#include <iostream>
#include <string>
using namespace std;

int main() {
	int tmp;
	bool skipz = false;
	string s;

	cin >> s;

	if (s == "0") {
		cout << 0;
	}
	else {
		tmp = (s[0] - '0');
		if (tmp / 4) {
			cout << 1;
			skipz = true;
		}
		if (((tmp % 4) / 2) || (skipz)) {
			cout << (tmp % 4) / 2;
			if ((tmp % 4) / 2) {
				skipz = true;
			}
		}
		cout << tmp % 2;
		
		for (int i = 1; i < s.size(); i++) {
			tmp = (s[i] - '0');
			cout << (tmp / 4) << (tmp % 4) / 2 << (tmp % 2);
		}
	}

	return 0;
}
