#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	bool cap = false, uline = false, impos = false;

	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if ((s.at(i) >= 'A') && (s.at(i) <= 'Z')) {
			if (i == 0) {
				impos = true;
				break;
			}
			cap = true;
		}
		else if (s.at(i) == '_') {
			if ((i == 0) || (i == (s.size() - 1))) {
				impos = true;
				break;
			}
			else if (s.at(i + 1) == '_') {
				impos = true;
				break;
			}
			uline = true;
		}
	}

	if (impos) {
		cout << "Error!";
	}
	else if ((cap == true) && (uline == false)) {
		for (int i = 0; i < s.size(); i++) {
			if ((s.at(i) >= 'A') && (s.at(i) <= 'Z')) {
				cout << '_' << (char)(s.at(i) - 'A' + 'a');
			}
			else {
				cout << s.at(i);
			}
		}
	}
	else if ((cap == false) && (uline == true)) {
		for (int i = 0; i < s.size(); i++) {
			if (s.at(i) == '_') {
				cout << (char)(s.at(i + 1) - ('a' - 'A'));
				i++;
			}
			else {
				cout << s.at(i);
			}
		}
	}
	else if ((cap == false) && (uline == false)) {
		cout << s;
	}
	else {
		cout << "Error!";
	}

	return 0;
}
