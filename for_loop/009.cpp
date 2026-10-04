#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum;

    for (int i = 1; i <= 5; i++) {
        for (int j = i; j <= 5; j++) {
            sum = i + j;
            if (sum == 7) {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}