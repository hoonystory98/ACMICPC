#include <bits/stdc++.h>
using namespace std;

#define MAXSIZE 266666

long long arr[1000005];
long long tree[MAXSIZE];

long long segmenttree(int node, int left, int right) {
	if (left == right) {
		return tree[node] = arr[left];
	}
	else {
		return tree[node] = segmenttree(node * 2, left, (left + right) / 2) + segmenttree(node * 2 + 1, (left + right) / 2 + 1, right);
	}
}

void update(int node, int left, int right, int k, int num) {
	if ((k < left) || (k > right)) {
		return;
	}
	else if (left == right) {
		tree[node] = num;
	}
	else {
		update(node * 2, left, (left + right) / 2, k, num);
		update(node * 2 + 1, ((left + right) / 2) + 1, right, k, num);
		tree[node] = tree[node * 2] + tree[node * 2 + 1];
	}
}

long long query(int node, int pleft, int pright, int left, int right) {
	if ((right < pleft) || (left > pright)) {
		return 0;
	}
	else if ((left <= pleft) && (right >= pright)) {
		return tree[node];
	}
	else {
		return query(node * 2, pleft, (pleft + pright) / 2, left, right) + query(node * 2 + 1, ((pleft + pright) / 2) + 1, pright, left, right);
	}
}

int main() {
	int n, q, x, y, a, b;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	segmenttree(1, 1, n);

	while (q--) {
		cin >> x >> y >> a >> b;
		cout << query(1, 1, n, min(x, y), max(x, y)) << "\n";
		update(1, 1, n, a, b);
	}

	return 0;
}
