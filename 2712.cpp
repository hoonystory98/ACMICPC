#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	double n;
	string c;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> c;

		cout << fixed;
		cout.precision(4);

		if (c == "kg") {
			cout << n * 2.2046 << " lb\n";
		}
		else if (c == "lb") {
			cout << n * 0.4536 << " kg\n";
		}
		else if (c == "l") {
			cout << n * 0.2642 << " g\n";
		}
		else if (c == "g") {
			cout << n * 3.7854 << " l\n";
		}
	}

	return 0;
}
