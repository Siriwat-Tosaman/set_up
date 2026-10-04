#include <iostream>
using namespace std;

int main() {
    unsigned long long n, m, all_sum = 0;
    cin >> n;
    m = n;

    int digits = 0;
    unsigned long long temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    if (digits == 0) digits = 1;

    bool exceeds_n = false;

    while (m > 0) {
        int r = m % 10;
        m /= 10;

        unsigned long long powered_digit = 1;
        for (int i = 0; i < digits; ++i) {
            powered_digit *= r;
        }
        if (!exceeds_n) {
            if (powered_digit > n - all_sum) {
                exceeds_n = true;
            } else {
                all_sum += powered_digit;
            }
        }
    }

    if (!exceeds_n && n == all_sum) {
        cout << n << " is an Armstrong number.";
    } else {
        cout << n << " is not an Armstrong number.";
    }
}
