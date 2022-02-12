#include <iostream>
using namespace std;

#define MAXSIZE 200005

double avg(double s, int n);

int ciq[MAXSIZE], eiq[MAXSIZE];

int main() {
	int t, n, m, cnt;
	double ciqs, eiqs, ciqa, eiqa, tiqc, tiqe;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		ciqs = 0;
		eiqs = 0;
		cnt = 0;

		for (int j = 0; j < n; j++) {
			cin >> ciq[j];
			ciqs += ciq[j];
		}
		for (int j = 0; j < m; j++) {
			cin >> eiq[j];
			eiqs += eiq[j];
		}
		ciqa = avg(ciqs, n);
		eiqa = avg(eiqs, m);

		for (int j = 0; j < n; j++) {
			tiqc = avg(ciqs - (double)ciq[j], n - 1);
			tiqe = avg(eiqs + (double)ciq[j], m + 1);
			if ((tiqc > ciqa) && (tiqe > eiqa)) {
				cnt++;
			}
		}

		cout << cnt << "\n";
	}
}

double avg(double s, int n) {
	double a = s / (double)n;

	return a;
}
