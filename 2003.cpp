#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m, num, l, r, cnt = 0;
	long long sum;
	vector<int> v;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	l = 0;
	r = 0;
	sum = v[0];

	while (r < n) {
		if (sum == m) {
			cnt++;
			if ((r + 1) < n) {
				sum += v[++r];
			}
			else {
				break;
			}
		}
		else if (sum > m) {
			sum -= v[l++];
		}
		else {
			if ((r + 1) < n) {
				sum += v[++r];
			}
			else {
				break;
			}
		}
	}

	cout << cnt;

	return 0;
}
