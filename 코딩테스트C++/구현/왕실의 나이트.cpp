#include <bits/stdc++.h>

using namespace std;

int cnt;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string S;
	cin >> S;
	
	int x = S[0] - 'a' + 1;
	int y = S[1] - '0';

	cnt = 8;
	

	if ((x + 2) > 8 || (y + 1) > 8) {
		cnt--;
	}
	if ((x + 2) > 8 || (y - 1) <= 0) {
		cnt--;
	}
	if ((x - 2) <= 0 || (y + 1) > 8) {
		cnt--;
	}
	if ((x - 2) <= 0 || (y - 1) <= 0) {
		cnt--;
	}
	if ((x + 1) > 8 || (y + 2) > 8) {
		cnt--;
	}
	if ((x + 1) > 8 || (y - 2) <= 0) {
		cnt--;
	}
	if ((x - 1) <= 0 || (y + 2) > 8) {
		cnt--;
	}
	if ((x - 1) <= 0 || (y - 2) <= 0) {
		cnt--;
	}
	cout << cnt;

}

//깔끔 버전
#include <bits/stdc++.h>

using namespace std;

int cnt;
int dx[] = { -2, -2, -1, -1,  1, 1,  2, 2 };
int dy[] = { -1,  1, -2,  2, -2, 2, -1, 1 };
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string S;
	cin >> S;

	int row = S[1] - '0';
	int column = S[0] - 'a' + 1;

	cnt = 8;

	for (int i = 0; i < 8; i++) {
		int nextRow = row + dx[i];
		int nextColumn = column + dy[i];

		if (nextRow < 1 || nextRow>8 || nextColumn < 1 || nextColumn>8) {
			cnt--;
		}
	}
	cout << cnt;
}
