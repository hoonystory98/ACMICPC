#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t, n, m, ipt, ord, i, j;
	vector <pair <int, int>> printq;
	int important[105];

	cin >> t;

	for (int test = 0; test < t; test++) {
		cin >> n >> m;

		for (i = 0; i < n; i++) {
			cin >> ipt;
			printq.push_back({ i, ipt });
		}

		i = 1;
		while(printq.size()) {
			for (j = 1; j < printq.size(); j++) {
				if (printq.front().second < printq.at(j).second) {
					ord = printq.front().first;
					ipt = printq.front().second;
					printq.erase(printq.begin());
					printq.push_back({ ord, ipt });
					break;
				}
			}
			if (j == printq.size()) {
				if (printq.front().first == m) {
					cout << i << "\n";
					break;
				}
				else {
					printq.erase(printq.begin());
					i++;
				}
			}
		}

		while (!printq.empty()) {
			printq.pop_back();
		}
	}

	return 0;
}
