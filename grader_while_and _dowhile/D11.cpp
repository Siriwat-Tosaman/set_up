#include <iostream>
using namespace std;

int main() {
    long long l, num, sum = 0, count = 0;
    cin >> l;

    do {
        cin >> num;
        sum += num;
        count++;
    } while (sum <= l);
    cout << sum << " " << count;

    return 0;
}