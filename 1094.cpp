#include <iostream>
using namespace std;

int main() {
	int s, i, t = 0;

	cin >> s;

	for (i = 0; i < 7; i++)
		t += (s >> i) & 1;

	cout << t;

	return 0;
}
