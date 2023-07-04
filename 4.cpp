#include <bits/stdc++.h>

using namespace std;

int answer;

int main() {
	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
			int k = i * j;
			string s = to_string(k);
			string t = s;
			reverse(t.begin(), t.end());
			if (s == t)
				answer = max(answer, k);
		}
	}

	cout << answer << '\n';

	return 0;
}

