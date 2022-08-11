#include <iostream>
using namespace std;

int main() {
	int i, j, n, k, cnt = 0;
	bool arr[1005] = { false, };

	cin >> n >> k;

	for (i = 2; i <= n; i++) {
		if (arr[i] == true) {
			continue;
		}
		else {
			for (j = i; j <= n; j += i) {
				if (arr[j] == true) {
					continue;
				}
				else {
					arr[j] = true;
					cnt++;
					if (cnt == k) {
						break;
					}
				}
			}
		}
		if (cnt == k) {
			cout << j;
			break;
		}
	}

	return 0;
}
