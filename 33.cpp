#include <bits/stdc++.h>

using namespace std;

// b < c < a
// (10b + a) / (10a + c) = b / c
// 10b(a - c) = c(a - b)

int denominator = 1;
int numerator = 1;

int main() {
	for (int b = 1; b < 10; b++) {
		for (int c = b + 1; c < 10; c++) {
			for (int a = c + 1; a < 10; a++) {
				if (10 * b * (a - c) == c * (a - b)) {
					numerator *= b;
					denominator *= c;
				}
			}
		}
	}

	if (denominator % numerator == 0)
		cout << denominator / numerator << '\n';
	else
		cout << denominator << '\n';
	return 0;
}