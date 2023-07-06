#include <bits/stdc++.h>

using namespace std;
//																																												21, 22, 23, 24, 25, 26, 27, 28, 29, 30
//				{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 // 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 // 30, 40, 50, 60, 70, 80, 90, 100, and, 1000 }
int main() {
	int arr[] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8, 6, 6, 5, 5, 5, 7, 6, 6, 7, 3, 8 };
	int sum = 0;

	for (int i = 1; i <= 999; i++) {
		if (i % 100 == 0) {
			sum += (arr[i / 100] + arr[28]);
			continue;
		} else if (i > 100) {
			sum += (arr[i / 100] + arr[28] + arr[29]);
		}

		int j = i % 100;
		if (j <= 20)
			sum += arr[j];
		else if (j <= 29)
			sum += (arr[20] + arr[j % 10]);
		else
			sum += (arr[j / 10 + 18] + arr[j % 10]); 
	}

	cout << sum + arr[1] + arr[30] << '\n';
	return 0;
}