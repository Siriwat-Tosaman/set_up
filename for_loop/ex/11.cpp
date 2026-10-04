#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 1;
    cin >> n;

    while (n >= 10) {
        n /= 10;
        count += 1;
    }
    cout << count;

    return 0;
}