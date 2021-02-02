#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string N;

	cin >> N;

	vector<int> test;
	bool pre = false;
	int tmp=0, result=0;
	
	for (int i = 0; i < N.size(); i++) {
		tmp += (N[i]-'0');
		test.push_back(int(N[i]-'0'));
		if (N[i] - '0' == 0) {
			pre = true;
		}
	}

	sort(test.rbegin(), test.rend());

	if (tmp % 3 == 0 && pre) {
		for (int i = 0; i < test.size(); i++) {
			cout << test[i];
		}
	}else {
		cout << "-1";
	}
	
}
