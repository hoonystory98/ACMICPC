#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, k, a = 1, b;
	queue<int> q;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	cout << "<";
	while (!q.empty()) {
		if ((a % k) == 0) {
			cout << q.front();
			q.pop();
			if (q.size()) {
				cout << ", ";
			}
			else {
				cout << ">";
			}
		}
		else {
			b = q.front();
			q.pop();
			q.push(b);
		}
		a++;
	}

	return 0;
}
