#include <bits/stdc++.h>

#define N 1000000

using namespace std;

vector<int> v(N + 1, 0);

int calCollatz(long long x) {
	int cnt = 0;
	while (x != 1) {
		if (x <= N && v[x] != 0) {
			cnt += v[x];
			break;
		}
		if (x % 2 == 0) {
			x /= 2;
		} else {
			x = x * 3 + 1;
		}
		cnt++;
	}
	return cnt;
}

int main() {
	int ans = 0;
	int maxV = 0;
	for (long long i = 1; i <= N; i++) {
		int temp = calCollatz(i);
		v[i] = temp;
		if (maxV < v[i]) {
			maxV = v[i];
			ans = i;
		}
	}

	cout << ans << '\n';
	return 0;
}