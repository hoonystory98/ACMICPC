#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt;
	string s;

	getline(cin, s);
	while (s != "#") {
		cnt = 0;
		for (int i = 0; i < s.size(); i++) {
			if ((s.at(i) >= 'A') && (s.at(i) <= 'Z')) {
				s.at(i) = s.at(i) - 'A' + 'a';
			}
			if ((s.at(i) == 'a') || (s.at(i) == 'e') || (s.at(i) == 'i') || (s.at(i) == 'o') || (s.at(i) == 'u')) {
				cnt++;
			}
		}

		cout << cnt << "\n";
		getline(cin, s);
	}

	return 0;
}
