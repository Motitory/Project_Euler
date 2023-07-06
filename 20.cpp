#include <bits/stdc++.h>

#define N 200

using namespace std;

vector<int> v(N + 1, 0);

int main() {
	v[0] = 1;

	for (int i = 100; i >= 2; i--) {
		vector<int> temp(N + 1, 0);		
		// Multiply v by i
		for (int j = N; j >= 0; j--) {
			v[j] *= i;
			if (v[j] >= 100) {
				temp[j + 2] += v[j] / 100;
				v[j] %= 100;
			}
			if (v[j] >= 10) {
				temp[j + 1] += v[j] / 10;
				v[j] %= 10;
			}
		}
		// Add temp to v
		for (int j = N; j >= 0; j--) {
			v[j] += temp[j];
			if (v[j] >= 10) {
				v[j + 1] += v[j] / 10;
				v[j] %= 10;
			}
		}
	}

	int sum = 0;
	for (const auto& i : v)
		sum += i;

	cout << sum << '\n';

	return 0;
}