#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    do {
        cin >> num;
        count += 1;
    } while (num < 1);

    cout << num << " " << count;
    return 0;
}