#include <bits/stdc++.h>
#include <cctype>

using namespace std;
using ll = long long;

bool can_use_shift[30][30];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, x; cin >> n >> m >> x;
    vector<pair<int, int>> shifts;
    vector<pair<int, int>> alf[26];
    string keyboard[n];
    for(string &row: keyboard) cin>> row;

    // read keyboard rectangle
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            if(keyboard[i][j] == 'S')
                shifts.push_back({i,j});
    }
    
    // for each latin letter check if you can use shift with it using only one hand
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(keyboard[i][j] != 'S'){
                alf[keyboard[i][j] - 'a'].push_back({i,j});
                for(auto p: shifts){
                    if((p.first - i) * (p.first - i) + (p.second - j) * (p.second - j) <= x * x)
                        can_use_shift[i][j] = true;
                }
            }
        }
    }
    
    // read text
    cin >> m;
    string text; cin >> text;
    int ans = 0;
    bool flag = false;

    // process text
    for(char ch: text){
        // if letter doesn't exists in the keyboard there is not need to continue
        if(alf[tolower(ch)-'a'].size() == 0){
            flag = true;
            break;
        }
        int c = 0;
        if(isupper(ch)){
            c = 1;
            if(shifts.size() == 0){
                flag = true;
                break;
            }
            for(auto p: alf[tolower(ch) - 'a']){
                if(can_use_shift[p.first][p.second])
                    c = 0;
            }
        }
        ans += c;
    }
    if(flag) cout << -1;
    else cout << ans;
}