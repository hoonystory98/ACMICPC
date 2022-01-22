#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int d, h, w;

	cin >> d >> h >> w;
	d *= d;
	h *= h;
	w *= w;

	cout << (int)sqrt((double)h * d / (h + w)) << " " << (int)sqrt((double)w * d / (h + w));

	return 0;
}
