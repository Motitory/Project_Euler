#include <bits/stdc++.h>

using namespace std;

int sieve[1000001];
vector<int> plist;
int maxn, ans;

int main() {
	sieve[0] = 1; sieve[1] = 1;
	for (int i = 2; i <= 1000000 / 2; i++) {
		if (sieve[i] == 0) {
			plist.push_back(i);
			for (int j = i * 2; j <= 1000000; j += i)
				sieve[j] = 1;
		}
	}

	// b <= 1000
	// a <= 1000
	// -1000 + b + 1 <= p <= 1000 + b + 1

	for (int i = 0; i < plist.size(); i++) {
		int b = plist[i];
		if (b > 1000)
			break;

		for (int a = -1000; a <= 1000; a++) {
			int n = 0;
			while (true) {
				int temp = n * n + a * n + b;
				if (temp < 0)
					break;
				if (sieve[temp] == 1)
					break;
				n++;
			}
			if (maxn < n) {
				maxn = n;
				ans = a * b;
			}
			if (n > 40) {
				cout << a << " " << b << " " << n << '\n';
			}
		}
	}

	cout << ans << '\n';
	
	return 0;
}