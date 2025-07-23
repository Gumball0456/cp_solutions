#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int cols[101];
int lines[101];
int comb[101];
int main(){
    int n; cin >> n;
    int c = 0;
    for(int i = 1; i < 101; i++){
        comb[i] = c + comb[i-1];
        c = i;
    }
    for(int i = 0; i < n; i ++){
        string s; cin >> s;
        for(int j = 0; j < n; j++)
            if(s[j] == 'C') cols[j]++, lines[i]++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += comb[cols[i]] + comb[lines[i]];
    }
    cout << ans;
    return 0;
}