#include <iostream>
using namespace std;

int main() {
	int maxnum = -1, maxi, maxj;
	int arr[10][10];

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (maxnum < arr[i][j]) {
				maxnum = arr[i][j];
				maxi = i + 1;
				maxj = j + 1;
			}
		}
	}

	cout << maxnum << "\n" << maxi << " " << maxj;

	return 0;
}
