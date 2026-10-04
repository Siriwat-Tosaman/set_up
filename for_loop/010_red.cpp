#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[5] = {2,3,5,8,10};
    int sum = 0;
    int most_sum = 0;
    string last;

    for (int i = 0; i < 5; i++) {
        for (int j = i; j < 5; j++) {
            if (array[i] == array[j]) {
                continue;
            }
            sum = array[i] + array[j];
            //cout << array[i] << "+" << array[j] << "=" << sum << endl;
            if (sum > most_sum) {
                most_sum = sum;
                //last = array[i] "+" << array[j] "=" most_sum;
                //cout << array[i] << "+" << array[j] << "=" << most_sum << endl;
            }

        }
    }
    return 0;
}