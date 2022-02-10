#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int g, i, j, a, b, sum = 0;
	vector<int> gnome(9);
	vector<int>::iterator k;

	for (i = 0; i < 9; i++) {
		cin >> gnome[i];
	}

	i = 0;
	j = 0;
	while (sum != 100) {
		sum = 0;
		if (j == 8) {
			i++;
			j = i;
		}
		a = gnome.at(i);
		gnome.erase(gnome.begin() + i);
		b = gnome.at(j);
		gnome.erase(gnome.begin() + j);

		for (k = gnome.begin(); k != gnome.end(); k++) {
			sum += *k;
		}
		gnome.insert(gnome.begin() + j, b);
		gnome.insert(gnome.begin() + i, a);
		j++;
	}
	gnome.erase(gnome.begin() + i);
	gnome.erase(gnome.begin() + (--j));

	sort(gnome.begin(), gnome.end());

	for (k = gnome.begin(); k != gnome.end(); k++) {
		cout << *k << '\n';
	}

	return 0;
}
