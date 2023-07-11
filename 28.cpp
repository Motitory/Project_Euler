#include <bits/stdc++.h>

using namespace std;

int main() {
	// int n = 500;
	// 4 * (2k + 1) ^ 2 - 12n => 2 / 3 * n * (8k^2 + 15k + 13	)
	// ans += 1;

	int n = 500;
	int ans = (8 * n * n + 15 * n + 13) * 2 * n / 3 + 1 ;

	cout << ans << '\n';

	return 0;
}