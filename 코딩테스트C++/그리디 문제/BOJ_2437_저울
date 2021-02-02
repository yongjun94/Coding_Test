#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int n;
int a[1001];

int main() {

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = x;
    }

    sort(a, a + n);

    int weight = 1;

    for (int i = 0; i < n; i++) {
        if (weight < a[i]) {
            break;
        }
            weight += a[i];
    }

    cout << weight;

}
