#include <bits/stdc++.h>
using namespace std;

#define MAXINPUT 100005
#define MAXSIZE 266666
#define DFLT 1e9+1

int ansmin, ansmax;
int arr[MAXINPUT];
int mintree[MAXSIZE];
int maxtree[MAXSIZE];

void segment_tree(int node, int left, int right) {
	if (left == right) {
		mintree[node] = arr[left];
		maxtree[node] = arr[right];
	}
	else {
		segment_tree(node * 2, left, (left + right) / 2);
		segment_tree(node * 2 + 1, ((left + right) / 2) + 1, right);
		mintree[node] = min(mintree[node * 2], mintree[node * 2 + 1]);
		maxtree[node] = max(maxtree[node * 2], maxtree[node * 2 + 1]);
	}
}

void query(int node, int pleft, int pright, int left, int right) {
	if ((left > pright) || (right < pleft)) {
		return;
	}
	else if ((left <= pleft) && (right >= pright)) {
		ansmin = min(ansmin, mintree[node]);
		ansmax = max(ansmax, maxtree[node]);
	}
	else {
		query(node * 2, pleft, (pleft + pright) / 2, left, right);
		query(node * 2 + 1, ((pleft + pright) / 2) + 1, pright, left, right);
	}
}

int main() {
	int n, m, a, b;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	segment_tree(1, 1, n);
	for (int i = 0; i < m; i++) {
		ansmin = DFLT;
		ansmax = 0;
		cin >> a >> b;
		query(1, 1, n, a, b);
		cout << ansmin << " " << ansmax << "\n";
	}

	return 0;
}
