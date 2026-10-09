#include <iostream>
using namespace std;

int main() {
    long long h, count = 0;
    cin >> h;

    do {
        cout << h << endl;
        h /= 2;
        count++;
    } while (h != 0);
    cout << "0" << endl;
    cout << "BOUNCES " << count;
    return 0;
}