#include <bits/stdc++.h>
using namespace std;

int n, m;
int pound[1000];
int result;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
			cin >> pound[i];
	}

	sort(pound, pound + n);

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (pound[i] < pound[j]) {
				result++;
			}
		}
	}
	
	cout << result;
}
