#include <iostream>
#include <string>
using namespace std;

int main() {
	bool arr[30] = { 0, };
	string s, comp = "CAMBRIDGE";

	for (int i = 0; i < comp.size(); i++) {
		arr[comp[i] - 'A'] = 1;
	}

	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (arr[s[i] - 'A']) {
			continue;
		}
		else {
			cout << s[i];
		}
	}

	return 0;
}
