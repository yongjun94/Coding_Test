#include <bits/stdc++.h>
using namespace std;

vector <pair<int, int> > score;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	int result[20];

	cin >> T;
	for (int i = 0; i < T; i++) {
		score.clear();

		int N;
		int min = 100001, tmp=0;
		
		cin >> N;
		for (int i = 0; i < N; i++) {
			int x, y;
			cin >> x >> y;
			score.push_back(make_pair(x, y));
		}
		sort(score.begin(), score.end());

		for (int i = 0; i < N; i++) {
			if (min > score[i].second) {
				min = score[i].second;
				tmp++;
			}
		}
		result[i] = tmp;
	}
	
	for (int i = 0; i < T; i++) {
		cout << result[i] << '\n';
	}

	
}
