#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;


int main() {
	int r;

	cin >> r;

	cout << fixed;
	cout.precision(6);

	cout << (double)r * r * M_PI << "\n" << (double)r * r * 2;

	return 0;
}
