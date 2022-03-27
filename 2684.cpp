#include <iostream>
#include <string>
using namespace std;

int main() {
	int p;
	int thp[10];
	string s[1005];
	string th[] = { "TTT","TTH","THT","THH","HTT","HTH","HHT","HHH" };

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> p;
	while (p--) {
		cin >> s[p];
		for (int i = 0; i < 8; i++) {
			thp[i] = 0;
		}

		for (int i = 0; i < (s[p].size() - 2); i++) {
			for (int j = 0; j < 8; j++) {
				if (s[p].substr(i, 3) == th[j]) {
					thp[j]++;
					break;
				}
			}
		}

		for (int i = 0; i < 8; i++) {
			cout << thp[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}
