#include <bits/stdc++.h>
using namespace std;

int l[11];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    
    cin >> n;
    
    for (int i =1; i<=n; i++){
        int x;
        cin >> x;
        
        int count = 0;
        
        for (int j=1; j<=n; j++){
            if(count == x && l[j] == 0){
                l[j] = i;
                break;
            }
            if(l[j] == 0){
                count++;
            }
        }
    }
    
    for (int i =1; i<= n; i++){
        cout << l[i] << ' ';
    }
}
