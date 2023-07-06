#include <bits/stdc++.h>

using namespace std;

vector<string> v;
int ans;

int main() {
	ifstream file("p022_names.txt");

	string line;
	while (getline(file, line, ',')) {
		stringstream ss(line);
		string name;
		while (getline(ss, name, '"')) {
			if (!name.empty())
				v.push_back(name);
		}
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		int sum = 0;
		for (const auto& c : v[i])
			sum += (c - 'A' + 1);

		ans += sum * (i + 1);
	}

	cout << ans << '\n';
	
	file.close();
	return 0;
}
