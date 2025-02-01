#include <bits/stdc++.h>
#include <cstdio>
 
using ll = long long;
using namespace std;
 
string sts(set<char> st){
    string s;
    for(char ch: st) s += ch;
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    string s[3];
    set<string> winners;
    int team = 0;
    int single = 0;
    for(int i = 0; i < 3; i++) cin >> s[i];
    for(int i = 0; i < 3; i++){
        set<char> ch;
        for(int j = 0; j < 3; j++){
            ch.insert(s[i][j]);
        }
        string st = sts(ch);
        if(winners.count(st) == 0 && ch.size() == 1) single++;
        if(winners.count(st) == 0 && ch.size() == 2) team++;
        winners.insert(st);
    }
    for(int i = 0; i < 3; i++){
        set<char> ch;
        for(int j = 0; j < 3; j++){
            ch.insert(s[j][i]);
        }
        string st = sts(ch);
        if(winners.count(st) == 0 && ch.size() == 1) single++;
        if(winners.count(st) == 0 && ch.size() == 2) team++;
        winners.insert(st);
    }

    set<char> ch;
    for(int j = 0; j < 3; j++){
        ch.insert(s[j][j]);
    }
    string st = sts(ch);
    if(winners.count(st) == 0 && ch.size() == 1) single++;
    if(winners.count(st) == 0 && ch.size() == 2) team++;
    winners.insert(st);
    ch.clear();
    for(int j = 0; j < 3; j++){
        ch.insert(s[j][2 - j]);
    }
    st = sts(ch);
    if(winners.count(st) == 0 && ch.size() == 1) single++;
    if(winners.count(st) == 0 && ch.size() == 2) team++;
    winners.insert(st);

    cout << single << '\n' << team;
}
