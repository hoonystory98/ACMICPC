#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int cnt, ans;
	int arr[10];

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	for (int i = 2; i < 1000000; i++) {
		cnt = 0;
		for (int j = 0; j < 5; j++) {
			if ((i % arr[j]) == 0) {
				cnt++;
			}
		}
		if (cnt >= 3) {
			ans = i;
			break;
		}
	}

	cout << ans;

	return 0;
}
