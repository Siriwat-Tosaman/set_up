#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	long long previous = 1, current = 1;
	if (n <= 2) {
		cout << 1;
	} else {
		int i = 3;
		while (i <= n) {
			long long next = previous + current;
			previous = current;
			current = next;
			++i;
		}
		cout << current;
	}

	return 0;
}
