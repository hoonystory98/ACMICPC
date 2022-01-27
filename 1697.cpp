#include <iostream>
#include <queue>
using namespace std;

#define MAXSIZE 100004

int main() {
	int n, k, act_1, act_2, act_3, cnt = 0;
	queue<pair<int, int>> q;
	bool check[MAXSIZE] = { 0, };

	cin >> n >> k;
	q.push({ n, cnt });
	check[n] = true;

	if (n == k) {
		cnt = 0;
	}
	else {
		while (!q.empty()) {
			act_1 = q.front().first + 1;
			act_2 = q.front().first - 1;
			act_3 = q.front().first * 2;
			cnt = q.front().second + 1;
			q.pop();

			if ((act_1 == k) || (act_2 == k) || (act_3 == k)) {
				break;
			}
			else {
				if ((check[act_1] != true) && (act_1 <= 100000)) {
					q.push({ act_1,cnt });
					check[act_1] = true;
				}
				if ((act_2 >= 0) && (check[act_2] != true)) {
					q.push({ act_2,cnt });
					check[act_2] = true;
				}
				if ((act_3 >= 0) && (act_3 <= 100000) && (check[act_3] != true)) {
					q.push({ act_3,cnt });
					check[act_3] = true;
				}
			}
		}
	}

	cout << cnt;

	return 0;
}
