#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int i, N, cnt = 0;
    int coin[6] = { 500, 100, 50, 10, 5, 1 };

    cin >> N;
    N = 1000 - N;

    while (N != 0) {
        for (i = 0; i < 6; i++) {
            if (N / coin[i] != 0) {
                cnt += N / coin[i];
                N %= coin[i];
            }
        }
    }
    cout << cnt;
}
