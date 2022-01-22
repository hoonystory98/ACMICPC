#include <iostream>
#include <string>
using namespace std;

int numwidth(char a) {
	switch (a) {
	case '1':
		return 2;
		break;
	case '0':
		return 4;
		break;
	default:
		return 3;
		break;
	}
}

int main() {
	int w = 0;
	string num;

	cin >> num;
	while (num != "0") {
		for (int i = 0; i < num.size(); i++) {
			w += numwidth(num[i]);
		}
		w += 2 + (num.size() - 1);

		cout << w << "\n";
		w = 0;

		cin >> num;
	}

	return 0;
}
