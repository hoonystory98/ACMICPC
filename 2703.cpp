#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	string s, abc;

	cin >> t;
	cin.ignore();
	while (t--) {
		getline(cin, s);
		cin >> abc;
		cin.ignore();

		for (int i = 0; i < s.size(); i++) {
			if ((s[i] >= 'A') && (s[i] <= 'Z')) {
				cout << abc[s[i] - 'A'];
			}
			else {
				cout << s[i];
			}
		}
		cout << "\n";
	}

	return 0;
}
