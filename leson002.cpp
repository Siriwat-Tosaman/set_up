#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1;

    while (n <= 100) {
        if (n % 3 != 0) {
            cout << n << endl;
        }
        n++;
    }
    return 0;
}