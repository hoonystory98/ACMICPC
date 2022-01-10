#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int x, y, w, h, min;
	cin >> x >> y >> w >> h;
	min = (x < y) ? (x < abs(h-y)) ? (x < abs(w-x)) ? x : abs(w-x) : (abs(h-y) < abs(w-x)) ? abs(h-y) : abs(w-x) : (y < abs(h-y)) ? (y < abs(w-x)) ? y : abs(w-x) : (abs(h-y) < abs(w-x)) ? abs(h-y) : abs(w-x);
	cout << min;
	
	return 0;	
}
