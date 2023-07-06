#include <bits/stdc++.h>
#define N 20

using namespace std;

int main() {
	long long answer = 1;
	// (2 * N)! / N! / N!
	for (int i = 1; i <= N; i++) {
		answer *= (2 * N + 1 - i);
		answer /= i;
	}
	cout << answer << '\n';
	return 0;
}