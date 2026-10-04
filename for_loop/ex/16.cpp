#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
        swap(x, y);
    }

    for (int i = x; i <= y; i++) {
        if (i == x || i == y) continue;
        if (i < 2) continue;

        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    return 0;
}