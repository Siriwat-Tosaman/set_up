#include <iostream>
using namespace std;

bool CheckPalindome(long long value) {
    long long reverse = 0, before = value;

    while (value > 0) {
        int digit = value % 10;
        reverse = (reverse * 10) + digit;
        value /= 10;
    }
    if (before == reverse) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    long long n;
    cin >> n;

    if (CheckPalindome(n)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}