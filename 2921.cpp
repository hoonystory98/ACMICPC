#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sum = 0;

	cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = i; j >= 0; j--) {
			sum += (i + j);
		}
	}

	cout << sum;

	return 0;
}
