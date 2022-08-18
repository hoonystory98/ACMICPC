#include <iostream>
#include <queue>
#include <vector>
using namespace std;

char forest[1005][1005];
int iforest[1005][1005];
bool svisit[1005][1005];
bool wvisit[1005][1005];

int main() {
	int r, c, y, x, cnt;
	queue<pair<pair<int, int>, int>> s;
	queue<pair<int, int>> w;
	vector<pair<int, int>> firstw;
	int dy[] = { -1,1,0,0 };
	int dx[] = { 0,0,-1,1 };

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> forest[i][j];
			svisit[i][j] = false;
			wvisit[i][j] = false;
			if (forest[i][j] == 'S') {
				s.push({ {i,j},0 });
				svisit[i][j] = true;
				iforest[i][j] = 0;
			}
			else if (forest[i][j] == '*') {
				w.push({ i,j });
				firstw.push_back({ i,j });
				wvisit[i][j] = true;
			}
			else if (forest[i][j] == 'X') {
				iforest[i][j] = -1;
				wvisit[i][j] = true;
			}
			else {
				iforest[i][j] = 0;
			}
		}
	}

	while (!w.empty()) {
		y = w.front().first;
		x = w.front().second;
		w.pop();

		for (int i = 0; i < 4; i++) {
			if ((y + dy[i] >= 0) && (y + dy[i] < r) && (x + dx[i] >= 0) && (x + dx[i] < c)) {
				if ((forest[y + dy[i]][x + dx[i]] == '.') || (forest[y + dy[i]][x + dx[i]] == 'S')) {
					if (wvisit[y + dy[i]][x + dx[i]] == false) {
						w.push({ y + dy[i],x + dx[i] });
						iforest[y + dy[i]][x + dx[i]] = iforest[y][x] + 1;
						wvisit[y + dy[i]][x + dx[i]] = true;
					}
				}
			}
		}
	}
	for (int i = 0; i < firstw.size(); i++) {
		iforest[firstw.at(i).first][firstw.at(i).second] = 0;
	}

	while (!s.empty()) {
		y = s.front().first.first;
		x = s.front().first.second;
		cnt = s.front().second;
		s.pop();

		if (forest[y][x] == 'D') {
			cout << cnt;
			
			return 0;
		}

		for (int i = 0; i < 4; i++) {
			if ((y + dy[i] >= 0) && (y + dy[i] < r) && (x + dx[i] >= 0) && (x + dx[i] < c)) {
				if ((iforest[y + dy[i]][x + dx[i]] != (-1)) && ((wvisit[y + dy[i]][x + dx[i]] == false) || ((cnt + 1) < iforest[y + dy[i]][x + dx[i]])) && (svisit[y + dy[i]][x + dx[i]] == false)) {
					s.push({ {y + dy[i],x + dx[i]},cnt + 1 });
					svisit[y + dy[i]][x + dx[i]] = true;
				}
			}
		}
	}

	cout << "KAKTUS";

	return 0;
}
