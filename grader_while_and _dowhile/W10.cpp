#include <iostream>
using namespace std;

int main() {
    long long n, count = 0, last = 0;
    cin >> n;

    if (n == 1) {
        cout << "0";
        return 0;
    }

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = (n * 3) + 1;
        }
        count += 1;
    }
    cout << count;

    return 0;
}