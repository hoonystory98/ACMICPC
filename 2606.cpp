#include <iostream>
#include <queue>
using namespace std;

#define MAXSIZE 1000

bool line[MAXSIZE][MAXSIZE] = { false, };
bool v[1000000] = { 0, };
int c = 0;

void wormvirus(int n);

int main() {
	int computer, n, i, a, b;

	cin >> computer >> n;

	for (i = 0; i < n; i++) {
		cin >> a >> b;
		line[a][b] = true;
		line[b][a] = true;
	}

	wormvirus(computer);

	cout << c - 1;

	return 0;
}

void wormvirus(int n) {
	int i, k;
	queue<int> q;

	q.push(1);
	v[1] = true;

	while (q.size()) {
		c++;
		k = q.front();
		q.pop();

		for (i = 1; i <= n; i++) {
			if ((line[k][i]) && (!v[i])) {
				q.push(i);
				v[i] = true;
			}
		}
	}
}
