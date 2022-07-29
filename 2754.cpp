#include <iostream>
using namespace std;

int main() {
	char c, n;
	double g = 0;

	cin >> c;
	if (c == 'F') {
		cout << "0.0";
	}
	else {
		cin >> n;
		switch (c) {
		case 'A':
			g += 4;
			break;
		case 'B':
			g += 3;
			break;
		case 'C':
			g += 2;
			break;
		case 'D':
			g += 1;
			break;
		default:
			break;
		}
		switch (n) {
		case '+':
			g += 0.3;
			break;
		case '-':
			g -= 0.3;
			break;
		default:
			break;
		}
		cout << fixed;
		cout.precision(1);
		cout << g;
	}
}
