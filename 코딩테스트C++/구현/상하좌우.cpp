#include <bits/stdc++.h>

using namespace std;

int x, y;
int N;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N ;
	cin.ignore();

	x = 1;
	y = 1;

	string S;
	getline(cin, S);

	S.erase(remove(S.begin(), S.end(), ' '), S.end());
//	cout << S;

	for (int i = 0; i < S.length(); i++) {
		
		if (S[i] == 'L') {
			if (y != 1) {
				y--;
			}
			
		}
		else if (S[i] == 'R') {
			if (y < N) {
				y++;
			}
		}
		else if (S[i] == 'U') {
			if (x != 1) {
				x--;
			}
		}
		else { //(S == 'D') 
			if (x < N) {
				x++;
			}
		}
	}
	cout << x << " " << y;

	
}
