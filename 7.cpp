#include <bits/stdc++.h>

using namespace std;

int sieve[105001];

int main() {
	sieve[0] = 1; sieve[1] = 1;
	for (int i = 2; i <= 105000; i++) {
		if (sieve[i] == 0) {
			for (int j = i * 2; j <= 105000; j += i) {
				sieve[j] = 1;
			}
		}
	}
	
	int count = 10001;
	for (int i = 2; i <= 105000; i++) {
		if (sieve[i] == 0) {
			count--;
			if (count == 0) {
				cout << i << '\n';
				break;
			}
		}
	}

	return 0;
}

