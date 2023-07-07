#include <bits/stdc++.h>

using namespace std;

int divisorSum[30001];
int num[30001];
vector<int> abundant;

int main() {
	for (int i = 1; i <= 30000 / 2; i++)
		for (int j = i * 2; j <= 30000; j += i)
			divisorSum[j] += i;

	for (int i = 1; i <= 30000; i++)
		if (divisorSum[i] > i)
			abundant.push_back(i);

	for (int i = 0; i < abundant.size(); i++)
		for (int j = i; j < abundant.size(); j++)
			if (abundant[i] + abundant[j] <= 30000)
				num[abundant[i] + abundant[j]] = 1;

	int ans = 0;

	for (int i = 1; i < 30000; i++)
		if (num[i] == 0)
			ans += i;

	cout << ans << '\n';
	
	return 0;
}