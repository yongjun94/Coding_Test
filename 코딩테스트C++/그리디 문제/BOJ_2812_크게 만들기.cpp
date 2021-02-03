#include <bits/stdc++.h>

using namespace std;

vector <char> result;
int N, K;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;

	string x;
	cin >> x;
	
	for (int i = 0; i < N; i++) {
		while (K != 0 && !result.empty() && result.back() < x[i]) {
			result.pop_back();
			K--;
		}
		result.push_back(x[i]);
	}

	while (K--) {
		result.pop_back();
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i];
	}
	
}
