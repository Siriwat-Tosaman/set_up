#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 2, count = 1;
    cin >> n;

    while (i <= sqrt(n)) {
        if (n % i == 0) {
            count += 1;
        }
        i++;
    }
    if (count <= 1) {
        cout << "PRIME";
    }
    else {
        cout << "NOT PRIME";
    }
    return 0;
}