#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int s1[26];
int s2[26];

int main(){
    int ans = 3;
    string s, t; cin >> s >> t;
    for(char ch: t) s1[ch - 'a']++; for(char ch: s) s2[ch - 'a']++;

    int st = 0;
    for(char ch: s){if(ch == t[st]) st++; if(st == t.size()) break;}
    if(st == t.size()) ans = 1;

    bool eq = true;
    for(int i = 0; i < 26; i++) if(s1[i] > s2[i]) {
        eq = false;
    }
    if(eq) ans = min(ans, 2);

    if(ans == 3)cout << "need tree";
    if(ans == 2){
        if(t.size() == s.size()) cout << "array";
        else cout << "both";
    } 
    if(ans == 1) cout << "automaton";
    return 0;
}