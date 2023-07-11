#include <bits/stdc++.h>

using namespace std;

int main() {
	unordered_set<double> uniquePowers;

	for (int a = 2; a <= 100; ++a) {
		for (int b = 2; b <= 100; ++b) {
			double power = pow(a, b);
			uniquePowers.insert(power);
		}
	}

	int count = uniquePowers.size();

	cout << count << '\n';

	return 0;
}
