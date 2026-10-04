#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;

    long long before = 1, now = 1;
    if (n <= 2) {
        cout << 1;
    }
    else {
        int i = 3;
        while (i <= n) {
            long long next = before + now;
            before = now;
            now = next;
            ++i;
        }
    }
    cout << now;

    return 0;
}