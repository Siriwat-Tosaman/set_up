#include <iostream>
using namespace std;

long long clearZero(long long value) {
    while (value > 0) {
        long long digit = value % 10;
        if (digit != 0) {
            break;
        }
        value /= 10;
    }

    return value;
}

int main() {
    long long number;
    long long reverse = 0;
    cin >> number;
    
    long long number_clear = clearZero(number);

    while (number_clear > 0) {
        long long digit = number_clear % 10;
        reverse = reverse * 10 + digit;
        number_clear /= 10;
    }

    cout << reverse;
    return 0;
}