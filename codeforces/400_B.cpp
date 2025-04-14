#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    string mat[n];
    for(string &line: mat) cin >> line;
    set<int> dists;
    for(string line: mat){
        int g,s;
        for(int i = 0; i < m; i++){
            if(line[i] == 'G') g = i; 
            if(line[i] == 'S') s = i; 
        }
        if(s - g < 0){
            cout << -1;
            return 0;
        }
        if(s - g > 0) dists.insert(s - g);
    }
    cout << dists.size();
    return 0;
}