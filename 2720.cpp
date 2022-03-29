#include <bits/stdc++.h>
using namespace std;

#define MAXSIZE 1000005

int main() {
	int t, c;
	int chng[] = { 25,10,5,1 };

	cin >> t;
	while (t--) {
		cin >> c;

		for (int i = 0; i < 4; i++) {
			cout << (c / chng[i]) << " ";
			c %= chng[i];
		}
		cout << "\n";
	}

	return 0;
}
