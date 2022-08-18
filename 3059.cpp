#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, ans = 0;
	string s;
	bool abc[30];

	cin >> t;
	while (t--) {
		for (int i = 0; i < 26; i++) {
			abc[i] = false;
		}
		ans = 0;

		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			abc[s[i] - 'A'] = true;
		}
		for (int i = 0; i < 26; i++) {
			if (abc[i] == false) {
				ans += (int)('A' + i);
			}
		}

		cout << ans << "\n";
	}

	return 0;
}
