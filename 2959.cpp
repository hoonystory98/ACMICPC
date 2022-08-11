#include <bits/stdc++.h>
using namespace std;

int main() {
	int num[5];

	for (int i = 0; i < 4; i++) {
		cin >> num[i];
	}
	sort(num, num + 4);

	cout << num[0] * num[2];

	return 0;
}
