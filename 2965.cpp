#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	cout << max(0, max((b - a - 1), (c - b - 1)));

	return 0;
}
