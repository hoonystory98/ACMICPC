#include <iostream>
#include <queue>
#include <memory.h>
using namespace std;

#define MAXSIZE 1005

int a[MAXSIZE][MAXSIZE];
bool c[MAXSIZE];

void dfs(int x, int n);
void bfs(int x, int n);

int main() {
	int i, n, m, v, f, t;

	cin >> n >> m >> v;

	for (i = 0; i < m; i++) {
		cin >> f >> t;

		a[f][t] = a[t][f] = 1;
	}

	dfs(v, n);

	cout << "\n";
	memset(c, false, sizeof(c));

	bfs(v, n);

	return 0;
}

void dfs(int x, int n) {
	int i;

	c[x] = true;
	cout << x << " ";

	for (i = 0; i < n; i++) {
		if ((a[x][(i + 1)]) && !c[(i + 1)]) {
			dfs(i + 1, n);
		}
	}
}

void bfs(int x, int n) {
	int i, k;
	queue<int> q;

	q.push(x);
	c[x] = true;

	while (q.size() > 0) {
		cout << q.front() << " ";
		k = q.front();
		q.pop();

		for (i = 0; i < n; i++) {
			if ((a[k][(i + 1)]) && !c[(i + 1)]) {
				q.push(i + 1);
				c[i + 1] = true;
			}
		}
	}
}
