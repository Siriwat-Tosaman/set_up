#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long x = a, y = b;
    while (y != 0) {
        long long temp = x % y;
        x = y;
        y = temp;
    }
    long long ans = (a / x) * b;
    cout << ans << endl;
    return 0;
}