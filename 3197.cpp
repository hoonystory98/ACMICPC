#include <bits/stdc++.h>
using namespace std;

int r, c;
char lake[1505][1505];
int melting[1505][1505];
bool check[1505][1505];
vector<pair<int, int>> swan;
queue<pair<int, int>> water;

int main() {
	int y, x, ans, cnt;
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };
	priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> lake[i][j];
			if (lake[i][j] == 'L') {
				swan.push_back({ i,j });
				water.push({ i,j });
				melting[i][j] = 0;
			}
			else if (lake[i][j] == '.') {
				water.push({ i,j });
				melting[i][j] = 0;
			}
			else {
				melting[i][j] = -1;
			}
		}
	}

	while (!water.empty()) {
		y = water.front().first;
		x = water.front().second;
		water.pop();

		for (int i = 0; i < 4; i++) {
			if ((y + dy[i] >= 0) && (y + dy[i] < r) && (x + dx[i] >= 0) && (x + dx[i] < c)) {
				if (melting[y + dy[i]][x + dx[i]] == (-1)) {
					melting[y + dy[i]][x + dx[i]] = melting[y][x] + 1;
					water.push({ y + dy[i],x + dx[i] });
				}
			}
		}
	}

	pq.push({ 0,{swan.at(0).first,swan.at(0).second} });
	check[swan.at(0).first][swan.at(0).second] = true;

	while (!pq.empty()) {
		cnt = pq.top().first;
		y = pq.top().second.first;
		x = pq.top().second.second;
		pq.pop();

		if ((y == swan.at(1).first) && (x == swan.at(1).second)) {
			ans = cnt;
			break;
		}

		for (int i = 0; i < 4; i++) {
			if ((y + dy[i] >= 0) && (y + dy[i] < r) && (x + dx[i] >= 0) && (x + dx[i] < c)) {
				if (check[y + dy[i]][x + dx[i]] != true) {
					pq.push({ max(cnt,melting[y + dy[i]][x + dx[i]]),{y + dy[i],x + dx[i]} });
					check[y + dy[i]][x + dx[i]] = true;
				}
			}
		}
	}

	cout << ans;

	return 0;
}
