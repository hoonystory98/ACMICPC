#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, x;
	priority_queue<int, vector<int>, greater<int>> q;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			if (q.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else {
			q.push(x);
		}
	}

	return 0;
}
