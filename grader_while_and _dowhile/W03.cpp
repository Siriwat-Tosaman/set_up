#include <iostream>
using namespace std;

int main() {
    long long  n, i = 1, sum = 1;
    cin >> n;

    while (i <= n) {
        sum *= i;
        i++;
    }
    cout << sum;
    return 0;
}