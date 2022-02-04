#include <iostream>
using namespace std;

int main() {
	long long n, num, s = 0, i = 1;
	int cnt = 0;

	cin >> n;
	num = n;
	while (num > 0) {
		num -= s;
		if (num <= 0) {
			break;
		}

		if ((num % i) == 0) {
			cnt++;
		}

		i++;
		s++;
	}

	cout << cnt;

	return 0;
}
