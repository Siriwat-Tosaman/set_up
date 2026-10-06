#include <iostream>
using namespace std;

int main() {
    unsigned long long num;
    int count = 0;
    cin >> num;

    do {
        num /= 10;
        count += 1;
    } while (num > 0);
    
    cout << count;
    return 0;
}