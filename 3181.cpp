#include <bits/stdc++.h>
using namespace std;

int main() {
	bool f = true;
	char c;
	string s, tmp;
	istringstream ss;
	map<string, int> words;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	words.insert({ "i",1 });
	words.insert({ "pa",1 });
	words.insert({ "te",1 });
	words.insert({ "ni",1 });
	words.insert({ "niti",1 });
	words.insert({ "a",1 });
	words.insert({ "ali",1 });
	words.insert({ "nego",1 });
	words.insert({ "no",1 });
	words.insert({ "ili",1 });

	getline(cin, s);
	ss.str(s);
	while (getline(ss, tmp, ' ')) {
		if (f) {
			c = (tmp[0] + 'A' - 'a');
			cout << c;
			f = false;
		}
		else {
			if (words.find(tmp) == words.end()) {
				c = (tmp[0] + 'A' - 'a');
				cout << c;
			}
		}
	}

	return 0;
}
