#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k, num, sum, l, ans;
	vector<int> v;

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	ans = 0;
	for (int i = 0; i < k; i++) {
		ans += v.at(i);
	}
	sum = ans;
	l = 0;

	for (int i = k; i < n; i++) {
		sum += v.at(i);
		sum -= v.at(l);
		l++;
		ans = max(ans, sum);
	}

	cout << ans;

	return 0;
}
