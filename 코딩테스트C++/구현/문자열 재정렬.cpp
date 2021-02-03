#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string S;
	cin >> S;

	int result = 0;
	int cnt = 0;

	sort(S.begin(), S.end());
	for (int i = 0; i < S.size(); i++) {
		if (S[i] <= '9' && S[i] >= '0') {
			result += S[i] - '0';
			cnt++;
		}
	}
	S.erase(0, cnt);
		
	cout << S << result;
}
