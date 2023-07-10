#include <bits/stdc++.h>

using namespace std;

int maxv, maxl;

int main() {
	for (int i = 2; i <= 1000; i++) {
		int temp = i;
		while (temp % 2 == 0)
			temp /= 2;
		while (temp % 5 == 0)
			temp /= 5;

		if (temp == 1)
			continue;
		// 10^k == 1 (mod n) -> 10^k - 1 == 0 (mod n) -> (10^k - 1) / 9 == 0 (mod n)
		// so, we can find the smallest k that 10^k - 1 is divisible by n
		// and that k is the length of the repeating cycle
		// and we can find the length of the repeating cycle by using Fermat's little theorem
		else {
			int k = 1;
			int remainder = 10 % temp;
			while (remainder != 1) {
				remainder = (remainder * 10) % temp;
				k++;
			}
			if (k > maxl) {
				maxl = k;
				maxv = i;
				cout << maxl << " : " << maxv << '\n';
			}
		}
	}
	
	cout << maxv << '\n';

	return 0;
}