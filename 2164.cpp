#include <iostream>
#include <queue>
using namespace std;

int main() {
	int c, i, k, s = 0;
	queue<int> card;

	cin >> c;

	for (i = 1; i <= c; i++)
		card.push(i);
	
	while (card.size() > 1) {
		if (s) {
			k = card.front();
			card.pop();
			card.push(k);

			s = 0;
		}
		else {
			card.pop();

			s = 1;
		}
	}

	cout << card.front();

	return 0;
}
