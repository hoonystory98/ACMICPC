#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, a, maxsize = 0;
	vector<int> v;
	vector<int> ans;

	cin >> n;
	v.push_back(n);

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
		
		while (1) {
			a = v.at(v.size() - 2) - v.at(v.size() - 1);

			if (a < 0) {
				if (v.size() > maxsize) {
					maxsize = v.size();
					ans.clear();
					for (int j = 0; j < v.size(); j++) {
						ans.push_back(v.at(j));
					}
				}
				v.clear();
				v.push_back(n);
				break;
			}
			else {
				v.push_back(a);
			}
		}
	}
	
	cout << maxsize << "\n";
	for (int i = 0; i < ans.size(); i++) {
		cout << ans.at(i) << " ";
	}

	return 0;
}
