#include <bits/stdc++.h>
using namespace std;

int main() {
    long long number_ten;
    cin >> number_ten;

    long long value = number_ten;
    string num_two = "";

    do {
        num_two += char((value % 2) + '0');
        value /= 2;
    } while (value > 0);

    reverse(num_two.begin(), num_two.end());

    cout << num_two;

    return 0;
}