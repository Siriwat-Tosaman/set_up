#include <iostream>
using namespace std;

long long fibonacci(long long n) {
    if (n <= 2) {
        return 1;
    }

    long long before = 1;
    long long now = 1;
    long long i = 3;
    while (i <= n) {
        long long next = before + now;
        before = now;
        now = next;
        ++i;
    }
    return now;
}

int main() {
    long long n;
    cin >> n;

    long long fibonacci_n = fibonacci(n);
    cout << fibonacci_n;
    return 0;
}