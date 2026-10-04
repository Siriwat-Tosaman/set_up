#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, count = 0;
    cin >> num;

    if (num <= 1) {
        cout << num << " in not a prime number.";
        return 0;
    }
    for (long long i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            count += 1;
        }
    }
    if (count < 1) {
        cout << num << " is a prime number.";
    }
    else {
        cout << num << " is not a prime number.";
    }

    return 0;
}