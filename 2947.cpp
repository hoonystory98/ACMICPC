#include <bits/stdc++.h>
using namespace std;

int main() {
	int tmp;
	vector<int> v;
	vector<int> ans = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	while (v != ans) {
		for (int i = 0; i < (v.size() - 1); i++) {
			if (v.at(i) > v.at(i + 1)) {
				swap(v.at(i), v.at(i + 1));

				for (int j = 0; j < v.size(); j++) {
					cout << v.at(j) << " ";
				}
				cout << "\n";
			}
		}
	}

	return 0;
}
