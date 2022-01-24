#include <iostream>
#include <string>
using namespace std;

int main() {
	int m = -1;
	int abc[30] = { 0, };
	string s;

	while (1) {
		getline(cin, s);

		for (int i = 0; i < s.size(); i++) {
			if ((s.at(i) >= 'a') && (s.at(i) <= 'z')) {
				abc[s.at(i) - 'a']++;
			}
		}

		if (cin.eof()) {
			break;
		}
	}

	for (int i = 0; i < 26; i++) {
		m = max(m, abc[i]);
	}
	for (int i = 0; i < 26; i++) {
		if (abc[i] == m) {
			cout << (char)(i + 'a');
		}
	}

	return 0;
}
