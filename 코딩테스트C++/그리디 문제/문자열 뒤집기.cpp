#include <bits/stdc++.h>
using namespace std;

string S;
int cnt[2];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> S;

	bool state = 0;

	for (int i = 0; i < S.size(); i++) {
		if (state == 0) {
			if (S[i] - '0' == 1) {
				state = 1;
				cnt[0]++;
			}
		}
		else {
			if (S[i]-'0' == 0) {
				state = 0;
				cnt[1]++;
			}
		}
	}

	cout << min(cnt[0], cnt[1]);

}
