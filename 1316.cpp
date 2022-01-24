#include <iostream>
#include <string>
using namespace std;

#define MAXSIZE 100

int wordchecker(string a) {
	int i, c = 1;
	int r[26] = { 0, };

	if (a.length() != 1) {
		for (i = 0; i < a.length(); i++) {
			if (((r[a[i] - 97]) == 1) && (a[i - 1] != a[i]))
				c = 0;
			else
				r[a[i] - 97] = 1;
		}
	}

	return c;
}

int main() {
	int i, n, g = 0;
	char a[MAXSIZE];

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> a;

		g += wordchecker(a);
	}

	cout << g;

	return 0;
}
