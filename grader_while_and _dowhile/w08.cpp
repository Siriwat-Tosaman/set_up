#include <iostream>
using namespace std;

int main() {
    long long n, sum = 0, count = 0;
    cin >> n;

    while (n != 0) {
        if (n != 0) {
            sum += n;
            count += 1;
        }
        cin >> n;
    }
    cout << sum << " " << count;

    return 0;
}