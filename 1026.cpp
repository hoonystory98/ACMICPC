#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, num, s = 0;
	vector<int> a;
	vector<pair<double, int>> b;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		a.push_back(num);
	}
	for (int i = 0; i < n; i++) {
		cin >> num;
		b.push_back({ (double)1 / num, num });
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0; i < n; i++) {
		s += a.at(i) * b.at(i).second;
	}

	cout << s;

	return 0;
}
