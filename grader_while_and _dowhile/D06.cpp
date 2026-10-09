#include <iostream>
#include <string>
using namespace std;

int main() {
    string pass;
    getline(cin, pass);
    string ref;
    int i = 0, refi;

    do {
        cin >> ref;
        i++;
        if (pass == ref) {
            cout << "WELCOME " << i;
            return 0;
        }
     } while(i <= 3);
     cout << "LOCKED";

     return 0;
}