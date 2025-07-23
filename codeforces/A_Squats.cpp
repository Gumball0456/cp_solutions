#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    int x = 0;
    for(char ch: s) if(ch == 'x') x++;
    cout << (n / 2 - min(x, n - x)) << '\n';
    for(char &ch: s){
        if(ch == 'X' && x < n / 2){
            x++;
            ch = 'x';
        }
        if(ch == 'x' && x > n / 2){
            x--;
            ch = 'X';
        }
    }
    cout << s;
    return 0;
}