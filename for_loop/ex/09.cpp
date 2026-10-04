#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    n = abs(n);
    m = abs(m);

    while (m != 0) {
        long long remaind = n % m;
        n = m;
        m = remaind;
    }

    cout << n;
}