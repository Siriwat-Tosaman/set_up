#include <iostream>
using namespace std;

int main() {
    long long sum = 0;

    for (int i = 1; i <= 20; i++) {
        if (i % 5 == 0) {
            continue;
        }
        sum += i;
    }
    cout << sum;

    return 0;
}