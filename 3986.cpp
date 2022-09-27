#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n, cnt = 0;
	string s;
	stack<char> st;

	cin >> n;
	while (n--) {
		cin >> s;

		for (int i = 0; i < s.size(); i++) {
			if (st.empty()) {
				st.push(s[i]);
			}
			else if (s[i] == st.top()) {
				st.pop();
			}
			else {
				st.push(s[i]);
			}
		}

		if (st.empty()) {
			cnt++;
		}
		while (!st.empty()) {
			st.pop();
		}
	}

	cout << cnt;

	return 0;
}
