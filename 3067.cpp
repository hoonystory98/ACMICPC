#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, tmp, m;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> v;
		v.push_back(0);
		for (int i = 1; i <= n; i++) {
			cin >> tmp;
			v.push_back(tmp);
		}
		cin >> m;

		int arr[10005] = { 0, };
		arr[0] = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = v[i]; j <= m; j++) {
				arr[j] += arr[j - v[i]];
			}
		}

		cout << arr[m] << "\n";
	}

	return 0;
}
