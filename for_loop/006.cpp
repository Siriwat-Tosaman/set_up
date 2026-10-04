#include <iostream>
using namespace std;

int main() {
    int score, sum = 0;

    for (int i = 1; ; i++) {
        cin >> score;
        if (score == -1) {
            break;
        }
        sum += score;
        i++;
    }
    cout << sum;

    return 0;
}