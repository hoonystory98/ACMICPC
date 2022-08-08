#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k = 1;

	cin >> n;

	cout << (1 + (k << n)) * (1 + (k << n));

	return 0;
}
