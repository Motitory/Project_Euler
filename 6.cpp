#include <bits/stdc++.h>

using namespace std;

int sumv, sqsum, sumsq, n;

int main() {
	cin >> n;

	sqsum = n * (n + 1) * (2 * n + 1) / 6; // a^2 + b^2 + c^2 ...	
	sumv = n * (n + 1) / 2;
	sumsq = sumv * sumv; // (a + b + c + ...) ^ 2

	cout << sumsq - sqsum  << '\n';
}
