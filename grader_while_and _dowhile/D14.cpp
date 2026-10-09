#include <iostream>
using namespace std;

int main() {
    int n, i = 1, j = 1;
    cin >> n;

    do {
        do {
            cout << "*";
            j++;
        } while (j <= i);
        cout << endl;
        j = 1;
        i++;
    } while (i <= n);

    return 0;
}