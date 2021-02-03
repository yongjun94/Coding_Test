#include <bits/stdc++.h>

using namespace std;

int N;
int cnt;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	
	for (int h = 0; h <= N; h++) {
			for (int m = 0; m < 60; m++) {
					for (int s = 0; s < 60; s++) {
						if (h%10 == 3 || h/10 == 3 ||
							m%10 == 3 || m/10 == 3 ||
							s%10 == 3 || s/10 == 3) {
							cnt++;
						}
					}
			}
	}

	cout << cnt;

}
