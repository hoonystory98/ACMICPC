#include <iostream>
using namespace std;

int main() {
	int e, s, m, i = 1, j = 1, k = 1, cnt = 1;

	cin >> e >> s >> m;

	while ((i != e) || (j != s) || (k != m)) {
		i++;
		j++;
		k++;
		cnt++;

		if (i > 15) {
			i = 1;
		}
		if (j > 28) {
			j = 1;
		}
		if (k > 19) {
			k = 1;
		}
	}

	cout << cnt;

	return 0;
}
