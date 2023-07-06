#include <bits/stdc++.h>

using namespace std;

int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
	// 1900.01.01 is Monday
	int day = 365;
	int cnt = 0;

	// 1901 ~ 1999	
	for (int i = 1; i < 100; i++) {
		for (int j = 1; j <= 12; j++) {
			if ((day + 1) % 7 == 0) {
				cout << i << ' ' << j << '\n';
				cnt += 1;
			}
			if (i % 4 == 0 && j == 2)
				day += 29;
			else
				day += days[j];
		}
	}

	// 2000
	for (int i = 1; i <= 12; i++) {
		if ((day + 1) % 7 == 0)
			cnt += 1;
		if (i == 2)
			day += 29;
		else
			day += days[i];
	}

	cout << cnt << '\n';

	return 0;
}