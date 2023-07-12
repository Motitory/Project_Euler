#include <bits/stdc++.h>

using namespace std;

// factorion

// 9! * d >= 10^(d - 1)
// 9! * 7 = 2540160
// 9! * 8 = 2903040
// 9! * 8 < 10^7
// d <= 7

// SFD(n) = sum of factors of n
bool sfd(int n) {
	int temp = n;
	int sumOfFactorials = 0;

	while (temp > 0) {
		int digit = temp % 10;
		int factorial = 1;

		for (int i = 1; i <= digit; ++i)
			factorial *= i;

		sumOfFactorials += factorial;
		temp /= 10;
	}

	return sumOfFactorials == n;
}

int main() {
	int sum = 0;

	for (int i = 10; i < 10'000'000; ++i)
		if (sfd(i))
			sum += i;

	cout << sum << '\n';

	return 0;
}