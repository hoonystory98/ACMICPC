#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n, m, b, e, t, cnt = 0;
	int k[55];
	deque<int> d;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		d.push_front(n - i);
	}

	for (int i = 0; i < m; i++) {
		cin >> k[i];

		b = 0;
		while (d.at(b) != k[i]) {
			b++;
		}
		e = d.size() - b;
		if (b <= e) {
			for (int j = 0; j < b; j++) {
				t = d.front();
				d.pop_front();
				d.push_back(t);
			}

			cnt += b;
			d.pop_front();
		}
		else {
			for (int j = 0; j < e; j++) {
				t = d.back();
				d.pop_back();
				d.push_front(t);
			}

			cnt += e;
			d.pop_front();
		}
	}

	cout << cnt;

	return 0;
}
