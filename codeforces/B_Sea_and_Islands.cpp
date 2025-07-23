#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    if(k > (n * n + 1) / 2) cout << "NO";
    else{
        cout << "YES" << '\n';
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if((i+j) % 2 == 0 && k > 0) cout << 'L', k--;
                else cout << 'S';
            }
            cout << '\n';
        }
    }
    return 0;
}