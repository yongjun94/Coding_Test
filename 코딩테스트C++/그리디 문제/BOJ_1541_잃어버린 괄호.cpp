#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S;

    cin >> S;

    bool minus = false;
    int result=0;

    string tmp = "";

    for (int i = 0; i <= S.size(); i++) {
        if (S[i] == '-' || S[i] == '+' || S[i] == '\0') {
            if (minus == true) {
                result += -stoi(tmp);
            }
            else {
                result += stoi(tmp);
            }
            tmp = "";
            if (S[i] == '-') {
                minus = true;
            }

        }
        else {
            tmp += S[i];
        }
    }

    cout << result;
}
