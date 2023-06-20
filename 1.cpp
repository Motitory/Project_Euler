#include <bits/stdc++.h>

using namespace std;

int main()
{
	// 3의 배수 합 + 5의 배수 합 - 15의 배수 합
	// 3 + 6 + 9 + 12 + ... + 999 = 3 * (1 + 2 + 3 + 4 + ... + 333)
	// 5 + 10 + 15 + 20 + ... + 995 = 5 * (1 + 2 + 3 + 4 + ... + 199)
	// 15 + 30 + 45 + 60 + ... + 990 = 15 * (1 + 2 + 3 + 4 + ... + 66)

	int sum = 0;
	for (int i = 1; i <= 333; i++)
		sum += 3 * i;

	for (int i = 1; i <= 199; i++)
		sum += 5 * i;

	for (int i = 1; i <= 66; i++)
		sum -= 15 * i;

	cout << sum << '\n';

	return 0;
}