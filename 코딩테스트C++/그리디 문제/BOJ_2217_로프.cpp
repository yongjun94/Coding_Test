#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector <int> arr;
    int max=1, w = 1;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        if (max < arr[i] * (n - i)) {
            max = arr[i] * (n - i);
        }
    }


    cout << max;
}
