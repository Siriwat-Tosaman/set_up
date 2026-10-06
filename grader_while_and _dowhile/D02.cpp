#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    cin >> num;

    do {
        cout << i << " ";
        i++;
    } while (i <= num);

    return 0;
}