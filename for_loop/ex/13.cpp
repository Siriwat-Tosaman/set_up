#include <iostream>
using namespace std;

int main() {
    int base, expo;
    long long total = 1;
    cin >> base >> expo;

    for (int i = 1; i <= expo; i++) {
        total *= base;
    }
    cout << total;

    return 0;
}