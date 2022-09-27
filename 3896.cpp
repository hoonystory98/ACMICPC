#include <iostream>
using namespace std;

#define MAXSIZE 1300000

bool num[MAXSIZE] = { false, };

int main() {
	int t, k, a, b;

	for (int i = 2; i < MAXSIZE; i++) {
		if (num[i] == false) {
			for (int j = i + i; j < MAXSIZE; j += i) {
				num[j] = true;
			}
		}
	}

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> k;
		if (num[k]) {
			a = k;
			b = k;
			while (num[a]) {
				a--;
			}
			while (num[b]) {
				b++;
			}

			cout << b - a << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}

	return 0;
}
