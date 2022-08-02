#include <iostream>
#include <string>
using namespace std;

int main() {
	string agent[10];
	bool isfbi = false;
	bool check[10] = { false, };

	for (int i = 0; i < 5; i++) {
		cin >> agent[i];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < agent[i].size(); j++) {
			if (agent[i][j] == 'F') {
				if (agent[i].substr(j, 3) == "FBI") {
					check[i] = true;
					isfbi = true;
					break;
				}
			}
		}
	}

	if (isfbi) {
		for (int i = 0; i < 5; i++) {
			if (check[i]) {
				cout << i + 1 << " ";
			}
		}
	}
	else {
		cout << "HE GOT AWAY!";
	}

	return 0;
}
