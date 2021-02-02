#include <bits/stdc++.h>
using namespace std;

int n;
int coin[1000];
int result;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}

	sort(coin, coin + n);

	result = 1;

	for (int i = 0; i < n; i++) {
		if (result < coin[i]) {
			break;
		}
		result += coin[i]; 
	}
	
	cout << result;
}
