#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;

	cin >> n;
	while (n--) {
		int ans = 0;
		int arr[15] = { 0, };

		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			arr[s[i] - '0']++;
		}
		for (int i = 0; i < 10; i++) {
			if (arr[i]) {
				ans++;
			}
		}

		cout << ans << "\n";
	}

	return 0;
}
