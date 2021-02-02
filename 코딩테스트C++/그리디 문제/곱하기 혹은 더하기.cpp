#include <bits/stdc++.h>
using namespace std;

string S;
int result;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		int x;
		x = S[i]-'0';

		if (x==0 || x==1) {
			result += x;
		}
		else {
			if (result != 0) {
				result *= x;
			}
			else {
				result += x;
			}
		}
	}

	cout << result;

}
