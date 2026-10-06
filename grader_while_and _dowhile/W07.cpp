#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;

    a = abs(a);
	b = abs(b);
	while (b != 0) {
		long long remainder = a % b;
		a = b;
		b = remainder;
	}

	cout << a;
	return 0;
}
