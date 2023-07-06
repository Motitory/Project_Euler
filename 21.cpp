#include <bits/stdc++.h>

#define N 10000

using namespace std;

int divisorSum[N + 1];

int main() {
	for (int i = 1; i <= N / 2; i++)
		for (int j = i * 2; j <= N; j += i)
			divisorSum[j] += i;

	int answer = 0;
	for (int i = 1; i <= N; i++)
		if (divisorSum[i] <= N && divisorSum[i] != i && divisorSum[divisorSum[i]] == i)
			answer += i;

	cout << answer << '\n';

	return 0;
}