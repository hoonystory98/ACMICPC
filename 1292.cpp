#include <iostream>
using namespace std;

int arr[1004];

int main() {
	int a, b, c = 0, suma = 0, sumb = 0;

	cin >> a >> b;

	for (int i = 1; c < b; i++) {
		for (int j = 0; j < i; j++) {
			arr[c] = i;
			c++;
		}
	}
	for (int i = 0; i < (a - 1); i++) {
		suma += arr[i];
	}
	for (int i = 0; i < b; i++) {
		sumb += arr[i];
	}

	cout << sumb - suma;

	return 0;
}
