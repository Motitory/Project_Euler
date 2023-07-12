#include <bits/stdc++.h>

using namespace std;

// a * b = c 에서 a, b, c의 자리 수 합은 9자리가 나와야 1 - 9 팬디지털이 됨
// a는 n자리, b는 m자리라고 하면, c의 자리수는 {n + m - 1 또는 n + m}이 됨
// 2(n + m), 2(n + m) - 1 둘 중 하나인데, 2(n + m) - 1만 가능
// 2(n + m) - 1 = 9
// n, m의 경우의 수는 (1, 4), (2, 3), (3, 2), (4, 1) 밖에 없음
// a, b가 바뀐 것은 하나의 경우로 생각하면 결론은 (1, 4), (2, 3)밖에 안됨.
// (a, b, c의 자리수 경우는) (1, 4, 4), (2, 3, 4)만 가능

bool isUsedDigit(int x, int y, int z) {
	bool check[10] = { false, };

	while (x) {
		check[x % 10] = true;
		x /= 10;
	}
	while (y) {
		check[y % 10] = true;
		y /= 10;
	}
	while (z) {
		check[z % 10] = true;
		z /= 10;
	}

	for (int i = 1; i < 10; ++i)
		if (!check[i])
			return false;
	
	return true;
}

int main() {
	int ans = 0;
	unordered_set<int> uniqueC;

// (1, 4, 4)
	for (int i = 1; i < 10; ++i) {
		for (int j = 1000; j < 10000; ++j) {
			int a = i;
			int b = j;
			int c = a * b;

			if (c >= 10000)
				break;

			if (!isUsedDigit(a, b, c))
				continue;

			if (uniqueC.find(c) == uniqueC.end()) {
				uniqueC.insert(c);
				ans += c;
				cout << a << " : " << b << " : " << c << '\n';
			}
		}
	}

// (2, 3, 4)
	for (int i = 10; i < 100; ++i) {
		for (int j = 100; j < 1000; ++j) {
			int a = i;
			int b = j;
			int c = a * b;

			if (c >= 10000)
				break;

			if (!isUsedDigit(a, b, c))
				continue;

			if (uniqueC.find(c) == uniqueC.end()) {
				uniqueC.insert(c);
				ans += c;
				cout << a << " : " << b << " : " << c << '\n';
			}
		}
	}

	cout << ans << '\n';

	return 0;
}