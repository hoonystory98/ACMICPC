#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t, n;
	vector<int> v;

	cin >> t;
	while (t--) {
		for (int i = 0; i < 10; i++) {
			cin >> n;
			v.push_back(n);
		}
		sort(v.begin(), v.end());

		cout << v.at(v.size() - 3) << "\n";

		while (!v.empty()) {
			v.pop_back();
		}
	}

	return 0;
}
