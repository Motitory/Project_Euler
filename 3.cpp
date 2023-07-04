#include <bits/stdc++.h>

using namespace std;

long long b, a = 2;

int main() {
	cin >> b;

	while (b != 1) {
		if (b % a == 0)
			b /= a;
		else
			a++;
	}

	cout << a << '\n';
	return 0;
}
