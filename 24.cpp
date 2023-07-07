#include <bits/stdc++.h>
#define N 1000000

using namespace std;

vector<int> num = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int main() {
	int count = 1;
	while (next_permutation(num.begin(), num.end())) {
		count++;
		if (count == N)
			break;
	}

	for (const auto& x : num)
		cout << x;

	cout << '\n';

	return 0;
}