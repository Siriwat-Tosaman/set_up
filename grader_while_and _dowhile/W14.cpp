#include <iostream>
using namespace std;

int main() {
    int num, max_num, min_num;

    cin >> num;
    max_num = num;
    min_num = num;

    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        if (num < min_num) {
            min_num = num;
        }
        if (num > max_num) {
            max_num = num;
        }
    }

    cout << max_num << " " << min_num;

    return 0;
}