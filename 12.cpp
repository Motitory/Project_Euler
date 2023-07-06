#include <bits/stdc++.h>

using namespace std;

int main() {
	for (int i = 11; i <= 987654321; i++)	{
		int count = 0;
		int sum = 0;
		if (i % 2 == 0)
			sum = i / 2 * (i + 1);
		else
			sum = (i + 1) / 2 * i;
		
		for (int j = 1; j * j <= sum; j++) {
			if (j * j == sum) {
				count++;
				if (count >= 500) {
					cout << sum << '\n';
					return 0;
				}
				break;
			} else if (sum % j == 0) {
				count += 2;
				if (count >= 500) {
					cout << sum << '\n';
					return 0;
				}
			}
		}
	}

	return 0;
}