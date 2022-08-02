#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, sum = 0;
	vector<pair<int, int>> v;
	vector<int> ord;

	for (int i = 0; i < 8; i++) {
		cin >> n;
		v.push_back({ n,i + 1 });
	}
	sort(v.begin(), v.end(), greater<>());

	for (int i = 0; i < 5; i++) {
		sum += v.at(i).first;
		ord.push_back(v.at(i).second);
	}
	sort(ord.begin(), ord.end());
	cout << sum << "\n";
	for (int i = 0; i < 5; i++) {
		cout << ord.at(i) << " ";
	}

	return 0;
}
