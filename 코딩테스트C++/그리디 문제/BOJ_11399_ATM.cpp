#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    vector <int> time;
    int result = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        time.push_back(x);
    }
    sort(time.begin(), time.end());

    for (int i = 0; i < N; i++) {
        result += (N - i) * time[i];
    }
    
    cout << result;
}
