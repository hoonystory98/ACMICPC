#include <iostream>
#include <algorithm>
using namespace std;

#define MAXSIZE 100005

int main() {
	int n, x, l, r, cnt = 0;
	int arr[MAXSIZE];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cin >> x;
	l = 0;
	r = n - 1;
	
	while (l < r) {
		if ((arr[l] + arr[r]) == x) {
			cnt++;
			l++;
			r--;
		}
		else if ((arr[l] + arr[r]) < x) {
			l++;
		}
		else if ((arr[l] + arr[r]) > x) {
			r--;
		}
	}

	cout << cnt;

	return 0;
}
