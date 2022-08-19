#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int t, numa, numb, sum;
	string a, suma;

	cin >> t;
	while (t--) {
		cin >> a;
		numa = stoi(a);
		reverse(a.begin(), a.end());
		numb = stoi(a);
		suma = to_string(numa + numb);
		sum = stoi(suma);
		reverse(suma.begin(), suma.end());

		if (sum == (stoi(suma))) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}
