#include <bits/stdc++.h>

#define FN "p067_matrix.txt"

using namespace std;

int main() {
	// read file
	ifstream file(FN);

	int triangle[100][100];
	string line;
	int row = 0;
	while (getline(file, line)) {
		stringstream ss(line);
		int col = 0;
		int num;
		while (ss >> num) {
			triangle[row][col] = num;
			col++;
		}
		row++;
	}

	// dynamic programming
	int dp[100][100] = {0, };
	for (int i = 0; i < 100; i++)
		dp[99][i] = triangle[99][i];

	for (int i = 98; i >= 0; i--)
		for (int j = 0; j <= i; j++)
			dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + triangle[i][j];

	cout << dp[0][0] << '\n';

	// end read file
	file.close();

	return 0;
}