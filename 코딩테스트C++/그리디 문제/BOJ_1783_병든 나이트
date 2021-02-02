#include <bits/stdc++.h>

using namespace std;

int n, m;
int result;

int main() {

    cin >> n >> m;
    
    if (n == 1) {
        result = 1;
    }
    else if (n == 2) {
        result = (m+1) / 2;
        if (result > 4) {
            result = 4;
        }
        
    }
    else {
        if (m >= 7) {
            result = 4 + (m-6);
        }
        else {
            result = m;
            if (result > 4) {
                result = 4;
            }
        }

    }
    cout << result;

}
