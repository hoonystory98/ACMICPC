#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, a, f, max, mq = 0;
	long long sum = 0;
	int freq[8008] = { 0, };
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
		sum += a;
		freq[(a + 4000)]++;
	}
	sort(v.begin(), v.end());
	for (int i = (v.at(0) + 4000); i <= (v.at(n - 1) + 4000); i++) {
		if (freq[i] > mq) {
			mq = freq[i];
			f = i - 4000;
		}
	}
	for (int i = (f + 1) + 4000; i <= (v.at(n - 1) + 4000); i++) {
		if (freq[i] == mq) {
			f = i - 4000;
			break;
		}
	}

	cout << round((double)sum / n) << "\n";
	cout << v.at(n / 2) << "\n";
	cout << f << "\n";
	cout << v.at(n - 1) - v.at(0);

	return 0;
}
