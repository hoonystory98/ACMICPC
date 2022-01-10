#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int k, a;
	vector<int> v;

	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	cout << v.at(0) * v.at(k - 1);

	return 0;
}
