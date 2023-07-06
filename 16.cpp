#include <bits/stdc++.h>

using namespace std;

vector<int> v(500);

int main() {
	int n = 1000;
	int sum = 0;
	int carry = 500;

	v[0] = 1;

	while (n--) {
		for (int i = (carry - 1); i >= 0; i--) {
			v[i] *= 2;
			if (v[i] >= 10) {
				v[i] -= 10;
				v[i + 1]++;
			}
		}
	}

	for (const auto& i : v)
		sum += i;

	cout << sum << '\n';

	return 0;
}