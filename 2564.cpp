#include <iostream>
#include <math.h>
using namespace std;

#define MAXSIZE 100000

int x, y;

struct pos {
	int comp;
	int adr;
};

int sdistance(int dc, int da, int sc, int sa);

int main() {
	int i, shop, c = 0;
	struct pos d;
	struct pos s[MAXSIZE];

	cin >> x >> y;

	cin >> shop;

	for (i = 0; i < shop; i++) {
		cin >> s[i].comp >> s[i].adr;
	}
	cin >> d.comp >> d.adr;

	for (i = 0; i < shop; i++) {
		c += sdistance(d.comp, d.adr, s[i].comp, s[i].adr);
	}

	cout << c;

	return 0;
}

int sdistance(int dc, int da, int sc, int sa) {
	switch (dc) {
	case 1:
		if (sc == 1) {
			return abs(da - sa);
		}
		else if (sc == 2) {
			return (((da + sa + y) < (2 * x - da - sa + y)) ? (da + sa + y) : (2 * x - da - sa + y));
		}
		else if (sc == 3) {
			return (da + sa);
		}
		else if (sc == 4) {
			return (x - da + sa);
		}
		break;
	case 2:
		if (sc == 1) {
			return (((da + sa + y) < (2 * x - da - sa + y)) ? (da + sa + y) : (2 * x - da - sa + y));
		}
		else if (sc == 2) {
			return abs(da - sa);
		}
		else if (sc == 3) {
			return (da + y - sa);
		}
		else if (sc == 4) {
			return (x - da + y - sa);
		}
		break;
	case 3:
		if (sc == 1) {
			return (da + sa);
		}
		else if (sc == 2) {
			return (y - da + sa);
		}
		else if (sc == 3) {
			return abs(da - sa);
		}
		else if (sc == 4) {
			return (((da + sa + x) < (2 * y - da - sa + x)) ? (da + sa + x) : (2 * y - da - sa + x));
		}
		break;
	case 4:
		if (sc == 1) {
			return (da + x - sa);
		}
		else if (sc == 2) {
			return (y - da + x - sa);
		}
		else if (sc == 3) {
			return (((da + sa + x) < (2 * y - da - sa + x)) ? (da + sa + x) : (2 * y - da - sa + x));
		}
		else if (sc == 4) {
			return abs(da - sa);
		}
		break;
	default:
		break;
	}
}
