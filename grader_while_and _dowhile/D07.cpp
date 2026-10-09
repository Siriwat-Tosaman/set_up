#include <iostream>
using namespace std;

int main() {
    int num_correct, count = 0, num;
    cin >> num_correct;

    do {
        cin >> num;
        count++;
        if (num > num_correct) {
            cout << "TOO HIGH" << endl;
        }
        else if (num < num_correct) {
            cout << "TOO LOW" << endl;
        }
    } while(num != num_correct);

    cout << "CORRECT" << endl;
    cout << "ATTEMPTS " << count;

    return 0;
}