#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int l, c;
char car[20];
bool check[20];

void makepw(int s, int size, int vow, int conso) {
	if (size == l) {
		if ((vow) && (conso >= 2)) {
			for (int i = 0; i < c; i++) {
				if (check[i]) {
					cout << car[i];
				}
			}
			cout << "\n";
		}
	}
	else {
		for (int i = s; i < c; i++) {
			if (check[i] == false) {
				check[i] = true;
				if ((car[i] == 'a') || (car[i] == 'e') || (car[i] == 'i') || (car[i] == 'o') || (car[i] == 'u')) {
					vow++;
					makepw(i + 1, size + 1, vow, conso);
					vow--;
				}
				else {
					conso++;
					makepw(i + 1, size + 1, vow, conso);
					conso--;
				}
				check[i] = false;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> l >> c;
	for (int i = 0; i < c; i++) {
		cin >> car[i];
		check[i] = false;
	}
	sort(car, car + c);

	makepw(0, 0, 0, 0);

	return 0;
}
