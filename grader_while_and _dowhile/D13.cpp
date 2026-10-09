
#include <iostream>
using namespace std;

long long sumdigit(long long n) {
    long long sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    long long n;
    cin >> n;

    cout << n << '\n';

    while (n >= 10) {
        n = sumdigit(n);
        cout << n << '\n';
    }

    return 0;
}
