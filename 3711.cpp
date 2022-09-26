#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, g, num, j;
    vector<int> student;
    vector<int> rr;
    const int mm = 1000001;
    bool res[1000005] = { false, };

    cin >> t;
    while (t--) {
        cin >> g;
        for (int i = 0; i < g; i++) {
            cin >> num;
            student.push_back(num);
        }

        for (int i = 1; i < mm; i++) {
            for (j = 0; j < student.size(); j++) {
                if (res[(student.at(j) % i)] == 1) {
                    break;
                }
                else {
                    res[(student.at(j) % i)] = 1;
                    rr.push_back(student.at(j) % i);
                }
            }
            while (!rr.empty()) {
                res[rr.back()] = 0;
                rr.pop_back();
            }
            if (j == student.size()) {
                cout << i << "\n";
                break;
            }
        }

        student.clear();
    }

    return 0;
}
