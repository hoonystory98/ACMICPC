#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int na, nb, i;
	string a, b, c;

	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	na = stoi(a);
	nb = stoi(b);
	c = to_string(na + nb);
	reverse(c.begin(), c.end());

	for (i = 0; i < c.size(); i++) {
		if (c[i] == '0') {
			continue;
		}
		else {
			break;
		}
	}

	cout << c.substr(i, c.size() - i);

	return 0;
}
