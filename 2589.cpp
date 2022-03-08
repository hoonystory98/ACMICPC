#include <iostream>
#include <string>
#include <queue>
#include <tuple>
using namespace std;

string bomul[55];
int island[55][55];
bool visit[55][55];

void novisit(int h, int w) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			visit[i][j] = false;
		}
	}
}

int main() {
	int h, w, y, x, cnt, mcnt;
	queue<tuple<int, int, int>> q;
	int dx[] = { -1,1,0,0 };
	int dy[] = { 0,0,-1,1 };

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> h >> w;
	for (int i = 0; i < h; i++) {
		cin >> bomul[i];
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (bomul[i][j] == 'L') {
				novisit(h, w);
				mcnt = -1;

				q.push({ i,j,0 });
				visit[i][j] = true;

				while (!q.empty()) {
					y = get<0>(q.front());
					x = get<1>(q.front());
					cnt = get<2>(q.front());
					mcnt = max(mcnt, cnt);
					q.pop();

					for (int k = 0; k < 4; k++) {
						if ((y + dy[k] < h) && (y + dy[k] >= 0) && (x + dx[k] < w) && (x + dx[k] >= 0)) {
							if ((bomul[y + dy[k]][x + dx[k]] == 'L') && (visit[y + dy[k]][x + dx[k]] == false)) {
								q.push({ y + dy[k],x + dx[k],cnt + 1 });
								visit[y + dy[k]][x + dx[k]] = true;
							}
						}
					}
				}

				island[i][j] = mcnt;
			}
			else {
				island[i][j] = 0;
			}
		}
	}

	mcnt = -1;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			mcnt = max(mcnt, island[i][j]);
		}
	}

	cout << mcnt;

	return 0;
}
