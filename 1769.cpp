#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt = 0;
	long long m;
	string s;

	cin >> s;
	while (s.size() > 1) {
		m = 0;
		for (int i = 0; i < s.size(); i++) {
			m += (s[i] - '0');
		}
		s = to_string(m);
		cnt++;
	}

	cout << cnt << "\n";
	if (((s[0] - '0') % 3) == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}
