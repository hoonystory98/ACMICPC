#include <bits/stdc++.h>
using namespace std;

bool check[255][255];

int main() {
	int r, c, y, x, v, k, ansa = 0, ansb = 0;
	string farm[255];
	queue<pair<int, int>> q;
	vector<pair<int, int>> ans;
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		cin >> farm[i];
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if ((farm[i][j] != '#') && (check[i][j] != true)) {
				q.push({ i,j });
				check[i][j] = true;
				v = 0;
				k = 0;

				while (!q.empty()) {
					y = q.front().first;
					x = q.front().second;
					q.pop();

					if (farm[y][x] == 'v') {
						v++;
					}
					else if (farm[y][x] == 'k') {
						k++;
					}

					for (int d = 0; d < 4; d++) {
						if ((y + dy[d] >= 0) && (y + dy[d] < r) && (x + dx[d] >= 0) && (x + dx[d] < c)) {
							if ((check[y + dy[d]][x + dx[d]] != true) && (farm[y + dy[d]][x + dx[d]] != '#')) {
								q.push({ y + dy[d],x + dx[d] });
								check[y + dy[d]][x + dx[d]] = true;
							}
						}
					}
				}
				ans.push_back({ v,k });
			}
		}
	}

	for (int i = 0; i < ans.size(); i++) {
		if (ans.at(i).first < ans.at(i).second) {
			ansa += ans.at(i).second;
		}
		else {
			ansb += ans.at(i).first;
		}
	}

	cout << ansa << " " << ansb;

	return 0;
}
