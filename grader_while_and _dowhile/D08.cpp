
#include <iostream>
using namespace std;

int main() {
    int b, op, money;
    cin >> b;

    do {
        cin >> op;

        if (op == 1) {
            cin >> money;
            b += money;
            cout << "BALANCE " << b << endl;
        }
        else if (op == 2) {
            cin >> money;

            if (b >= money) {
                b -= money;
                cout << "BALANCE " << b << endl;
            }
            else {
                cout << "INSUFFICIENT" << endl;
            }
        }
        else if (op == 3) {
            cout << "BALANCE " << b << endl;
        }

    } while (op != 0);

    cout << "FINAL " << b << endl;

    return 0;
}
