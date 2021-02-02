#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    int coin[10];
    int num = 0;

    cin >> N >> K;


    for (int i = 0; i < N; i++) {
        cin >> coin[i];
    }

    for (int i = N-1; i >= 0; i--) {
        if (K / coin[i] != 0) {
            num += K / coin[i];
            K %= coin[i];
        }
    }
    cout << num;
}
