#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    int n; cin >> n;
    string visited[n];
    for(string &v: visited) cin >> v;
    sort(visited, visited + n);
    for(string &v: visited){
        if(s.size() > v.size()) continue;
        bool found = true;
        for(int i = 0; i < (int) s.size(); i++){
            if(s[i] != v[i]) {
                found = false;
                break;
            }
        }
        if(found){
            cout << v;
            return 0;
        }
    }
    cout << s;
    return 0;
}