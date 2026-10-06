#include <iostream>
using namespace std;

int main() {
    long long n, i = 0;
    int sum = 0;
    cin >> n;

    while (n > 0) {
        i = n % 10;
        sum += i;
        n /= 10;
        i = 0;
    }
    cout << sum;

    return 0;
}