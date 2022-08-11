#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
	if ((a % b) == 0) {
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}

int main() {
	int n, m, num;
	vector<int> arr;
	set<int> ans;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr.push_back(num);
	}
	sort(arr.begin(), arr.end());
	
	m = (arr.at(1) - arr.at(0));
	for (int i = 2; i < n; i++) {
		m = gcd(m, arr.at(i) - arr.at(i - 1));
	}

	for (int i = 2; (i * i) <= m; i++) {
		if ((m % i) == 0) {
			ans.insert(i);
			ans.insert(m / i);
		}
	}
	ans.insert(m);

	for (auto it = ans.begin(); it != ans.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}
