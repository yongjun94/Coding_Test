#include <bits/stdc++.h>

using namespace std;

const int MAX = 50;

int N, M;
int cache[MAX][4]; 

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;

		for (int j = 0; j < M; j++) {
			if (tmp[j] == 'A') {
				cache[j][0]++;
			}
			else if (tmp[j] == 'C') {
				cache[j][1]++;
			}
			else if (tmp[j] == 'G') {
				cache[j][2]++;
			}
			else { // 'T'
				cache[j][3]++;
			}
		}
	}

	int result = 0;
	string DNA = "";

	for (int i = 0; i < M; i++) {
		int idx = 0, cnt = 0;
		for (int j = 0; j < 4; j++) {
			if (cache[i][j] > cnt) {
				idx = j;
				cnt = cache[i][j];
			}
		}
		result += (N - cnt);

		if (idx == 0) {
			DNA += 'A';
		}
		else if (idx == 1) {
			DNA += 'C';
		}
		else if (idx == 2) {
			DNA += 'G';
		}
		else {
			DNA += 'T';
		}
	}

	cout << DNA << "\n";
	cout << result;
}
