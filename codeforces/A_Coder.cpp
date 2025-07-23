#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    cout << (n * n + 1) / 2 << '\n';
    for(int i = 0; i < n; i ++){
        char curr = i % 2 == 0 ? '.' : 'C';
        for(int j = 0; j < n; j++){
            if(curr == '.') curr = 'C';
            else curr = '.';
            cout << curr;
        }
        cout << '\n';
    }
    return 0;
}