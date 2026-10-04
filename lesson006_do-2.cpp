#include <iostream>
using namespace std;

int main() {
    int n = 1;

    do {
        if (n % 2 == 0) {
            cout << n << " ";
        }
        n++;
    } while (n <= 20);

    return 0;
}