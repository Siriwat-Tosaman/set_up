#include <iostream>
using namespace std;

int main() {
    unsigned long long n, count = 0, last = 0;
    cin >> n;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            (n * 3) + 1;
        }
        count + 1;
    }
    cout << count;

    return 0;
}