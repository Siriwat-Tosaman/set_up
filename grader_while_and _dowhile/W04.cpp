#include <iostream>
using namespace std;

int main() {
    long long n;
    int count = 1;
    cin >> n;

    while (n >= 10) {
        count += 1;
        n /= 10;
    }
    cout << count;

    return 0;
}