#include <iostream>
using namespace std;

int main() {
    int r, b, l = 3, w;

    cin >> r >> b;

    while (1) {
        for (w = 3; w <= l; w++) {
            if ((l * w == (r + b)) && ((l - 2) * (w - 2) == b)) {
                break;
            }
        }
        if (w <= l) {
            break;
        }
        l++;
    }

    cout << l << " " << w;

    return 0;
}
