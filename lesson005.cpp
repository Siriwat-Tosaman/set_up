#include <iostream>
using namespace std;

int main() {
    int n = 1;

    while (n <= 20) {
        if (n % 2 != 0) {
            cout << n << endl;
        }
        n++;
    }
    return 0;
}