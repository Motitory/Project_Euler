#include <bits/stdc++.h>

using namespace std;

int fibo[1000000], sum;

int main() {
	fibo[0] = 1, fibo[1] = 1;

	for (int i = 2; i <= 1000000; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		if (fibo[i] > 4000000) break;
		if (fibo[i] % 2 == 0) sum += fibo[i];
	}

	cout << sum << '\n';

	return 0;
}
