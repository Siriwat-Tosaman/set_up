#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c;
        count++;
        if (count % 7 == 0) {
            cout << '\n';
        } else if (c != 'Z') {
            cout << ' ';
        }
    }
    return 0;
} 