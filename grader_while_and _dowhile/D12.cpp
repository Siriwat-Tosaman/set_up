
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int count = 0;
    double sum = 0, score;

    do {
        cin >> score;

        if (score >= 0) {
            sum += score;
            count++;
        }

    } while (score >= 0);

    if (count == 0) {
        cout << "NO DATA";
    }
    else {
        double average = sum / count;
        cout << fixed << setprecision(2) << average;
    }

    return 0;
}
