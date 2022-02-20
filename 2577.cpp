#include <iostream>
using namespace std;

int main() {
	int a, b, c, d = 1, i;
	int digit[10] = { 0, };

	cin >> a >> b >> c;

	do {
		digit[((a*b*c) / d) - ((a*b*c) / (d * 10) * 10)]++;
		d *= 10;
	} while ((a*b*c)/d!=0);

	for (i = 0; i < 10; i++)
		cout << digit[i] << "\n";

	return 0;
}
