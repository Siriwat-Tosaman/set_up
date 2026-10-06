#include <iostream>
using namespace std;

int main() {
    unsigned long long num, sum = 0;
    cin >> num;

    do {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    } while (num > 0);

    cout << sum;
    return 0;
}