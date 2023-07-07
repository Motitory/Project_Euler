#include <bits/stdc++.h>

using namespace std;

vector<int> v1;
vector<int> v2;

int main() {
	v1.push_back(1);
	v2.push_back(1);
	int count = 2;

	while (true) {
		count++;
		vector<int> fibo;

		for (int i = 0; i < v2.size(); i++) {
			if (v1.size() - 1 >= i)
				fibo.push_back(v1[i] + v2[i]);
			else
				fibo.push_back(v2[i]);
		}
		
		for (int i = fibo.size() - 1; i >= 0; i--) {
			if (i == (fibo.size() - 1) && fibo[i] >= 10) {
				fibo.push_back(fibo[i] / 10);
				fibo[i] %= 10;
			} else if (fibo[i] >= 10) {
				fibo[i + 1] += fibo[i] / 10;
				fibo[i] %= 10;
			}
		}

		v1 = v2;
		v2 = fibo;
		
		int n = fibo.size();
		cout << n << " : " << count << '\n';
		if (n >= 1000)
			break;
	}
	cout << count << '\n';

	return 0;	
}