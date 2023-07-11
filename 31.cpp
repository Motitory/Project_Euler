#include <bits/stdc++.h>

using namespace std;

int arr[9] = { 0, 1, 2, 5, 10, 20, 50, 100, 200 };
int dp[9][201];


int main() {
	for (int i = 1; i <= 8; ++i) {
		for (int j = 1; j <= 200; ++j) {
			if (j < arr[i])
				dp[i][j] = dp[i - 1][j];
			else if (j == arr[i])
				dp[i][j] = dp[i - 1][j] + 1;
			else
				dp[i][j] = dp[i - 1][j] + dp[i][j - arr[i]];
		}
	}

	cout << dp[8][200] << '\n';

	return 0;
}