#include <iostream>
using namespace std;

int main() {
	int s_1, s_2, s_3, m = -1, ans;
	int sum[85] = { 0, };

	cin >> s_1 >> s_2 >> s_3;
	for (int i = 1; i <= s_1; i++) {
		for (int j = 1; j <= s_2; j++) {
			for (int k = 1; k <= s_3; k++) {
				sum[i + j + k]++;
			}
		}
	}

	for (int i = 3; i <= (s_1 + s_2 + s_3); i++) {
		if (m < sum[i]) {
			m = sum[i];
			ans = i;
		}
	}

	cout << ans;

	return 0;
}
