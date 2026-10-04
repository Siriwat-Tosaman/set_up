#include <bits/stdc++.h>
using namespace std;

int main() {
    int maxLen = 0;
    int count = 5;
    char c = 'a';

    while (c <= 'z') {
        int rowLength = 0;
        for (int i = 0; i < count && c <= 'z'; i++) {
            rowLength++;
            if (i + 1 < count && c < 'z') {
                rowLength++;
            }
            c++;
        }
        if (rowLength > maxLen) {
            maxLen = rowLength;
        }
        count++;
    }

    count = 5;
    c = 'a';
    while (c <= 'z') {
        string row;
        for (int i = 0; i < count && c <= 'z'; i++) {
            row += c;
            if (i + 1 < count && c < 'z') {
                row += ' ';
            }
            c++;
        }
        cout << string(maxLen - row.length(), ' ') << row << '\n';
        count++;
    }

    return 0;
}