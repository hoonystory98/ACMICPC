#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;

	cin >> a;

	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] > 64 && a[i] < 91)
			a[i] += 32;
		else
			a[i] -= 32;
	}

	cout << a;

	return 0;
}
