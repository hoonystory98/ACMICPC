#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	string s;

	cin >> s;
	for (int i = 1; i <= (s.size() / i); i++) {
		if ((s.size() % i) == 0) {
			k = i;
		}
	}

	for (int i = 0; i < k; i++) {
		for (int j = i; j < s.size(); j += k) {
			cout << s[j];
		}
	}

	return 0;
}
