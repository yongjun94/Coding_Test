#include <bits/stdc++.h>
using namespace std;

vector<int> a;

int n;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	
	sort(a.begin(), a.end());

	int group = 0;
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		cnt++;
		if (cnt == a[i]) {
			group++;
			cnt = 0;
		}
	}
	
	cout << group;

}
