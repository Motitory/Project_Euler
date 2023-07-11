#include <bits/stdc++.h>

using namespace std;

int main() {
	int sum = 0;
	// 9^5 * d >= 10^(d - 1) -> d <= 6
	// 9^5 * 6 = 354294
	// 9^5 * 7 = 413343
	// 9^5 * 7 < 10^6
	// so, we can find the upper bound of the range
	for (int i = 10; i < 10'000'000; ++i) {
		int temp = i;
		int sumOfFifthPowers = 0;

		while (temp > 0) {
			int digit = temp % 10;
			sumOfFifthPowers += pow(digit, 5);
			temp /= 10;
		}

		if (sumOfFifthPowers == i)
			sum += i;
	}

	cout << sum << '\n';

	return 0;
}