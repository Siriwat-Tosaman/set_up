#include <iostream>
using namespace std;

int main() {
    long long a, b, i = 1, sum = 1;
    cin >> a >> b;

    while (i <= b) {
        sum *= a;
        i++;
    }
    cout << sum;

    return 0;
}