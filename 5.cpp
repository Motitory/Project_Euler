#include <bits/stdc++.h>

using namespace std;

long long answer = 1;

long long gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

long long lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
	for (int i = 2; i <= 20; i++) {
		answer = lcm(answer, i);
	}
	cout << answer << '\n';

	return 0;
}

// 개선사항 : long long 말고, int로 바꿀 것