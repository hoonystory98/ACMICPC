#include <iostream>
using namespace std;

int snail[1000][1000];

int main() {
    int n, f, i, j, k, num, y, x;
    bool ans = true;

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> f;
    num = n * n;
    k = n;
    j = 0;

    for (i = 0; i < k; i++) {
        snail[i][j] = num; 
        if ((ans) && (num == f)) {
            y = i + 1;
            x = j + 1;
            ans = false;
        }
        num--;
    }
    k--;
    while (k) {
        for (j = n - k; j <= k; j++) {
            snail[k][j] = num;
            if ((ans) && (num == f)) {
                y = k + 1;
                x = j + 1;
                ans = false;
            }
            num--;
        }
        for (i = k - 1; i >= (n - k - 1); i--) {
            snail[i][k] = num;
            if ((ans) && (num == f)) {
                y = i + 1;
                x = k + 1;
                ans = false;
            }
            num--;
        }
        for (j = k - 1; j >= (n - k); j--) {
            snail[n - k - 1][j] = num;
            if ((ans) && (num == f)) {
                y = n - k;
                x = j + 1;
                ans = false;
            }
            num--;
        }
        for (i = n - k; i < k; i++) {
            snail[i][n - k] = num;
            if ((ans) && (num == f)) {
                y = i + 1;
                x = n - k + 1;
                ans = false;
            }
            num--;
        }
        k--;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << snail[i][j] << " ";
        }
        cout << "\n";
    }
    cout << y << " " << x;

    return 0;
}
