#include <bits/stdc++.h>
#define N 2000000

using namespace std;

int sieve[N + 1];

int main() {
	long long answer = 0;
	sieve[0] = 1; sieve[1] = 1;
	for (int i = 2; i <= N; i++) {
		if (sieve[i] == 0) {
			answer += i;
			for (int j = i * 2; j <= N; j += i) {
				sieve[j] = 1;
			}
		}
	}

	cout << answer << '\n';

	return 0;
}