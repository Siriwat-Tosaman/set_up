#include <iostream>

using namespace std;

int main() {
	long long first, second;
	cout << "Enter two positive integers  : ";
	cin >> first >> second;

	if (first <= 0 || second <= 0) {
		cout << "Please enter positive integers.\n";
		return 0;
	}

	long long lower, upper;
	if (first < second) {
		lower = first;
		upper = second;
	} else {
		lower = second;
		upper = first;
	}

	cout << "\nArmstrong number between " << first << " and " << second << " :\n";
	long long number = lower;
	while (true) {
		long long digits = number;
		int digitCount = 0;
		while (digits > 0) {
			++digitCount;
			digits /= 10;
		}

		long long sum = 0;
		digits = number;
		while (digits > 0) {
			const int digit = static_cast<int>(digits % 10);
			long long power = 1;
			int i = 0;
			while (i < digitCount) {
				power *= digit;
				++i;
			}
			sum += power;
			digits /= 10;
		}

		if (sum == number) {
			cout << number << ' ';
		}
		if (number == upper) {
			break;
		}
		++number;
	}

	return 0;
}
