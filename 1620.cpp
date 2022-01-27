#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

#define MAXSIZE 100005

vector<pair<int, string>> v;
vector<string> ans;
map<string, int> mm;

int main() {
	int n, m;
	string s;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back({ (i + 1),s });
		mm.insert({ s,i + 1 });
	}

	for (int i = 0; i < m; i++) {
		cin >> s;
		if ((s[0] >= '1') && (s[0] <= '9')) {
			ans.push_back(v.at(stoi(s) - 1).second);
		}
		else {
			ans.push_back(to_string(mm.find(s)->second));
		}
	}

	for (int i = 0; i < m; i++) {
		cout << ans.at(i) << "\n";
	}

	return 0;
}
