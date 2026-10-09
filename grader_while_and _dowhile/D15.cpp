#include <iostream>
using namespace std;

int main() {
    long long x;
    char c;
    
    do {
        cin >> x >> c;
        long long number = x * x;
        cout << number << endl;
    } while (c == 'Y' || c == 'y');

    return 0;
}