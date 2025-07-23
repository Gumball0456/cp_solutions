#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool col[100],line[100];
int main(){
    int m, n; cin >> m >> n;
    vector<pair<int,int>> ones;
    int mat[m][n];
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) cin >> mat[i][j];
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++){
        if(mat[i][j])ones.push_back({i,j});
        else{
            col[j] = 1;
            line[i] = 1;
        }
    }
    bool lines = true, cols = true;
    for(int i = 0; i < m; i++) if(!line[i]) cols = false;
    for(int i = 0; i < n; i++) if(!col[i]) lines = false;

    bool check = true;
    for(auto p: ones) if((col[p.second] || cols) && (lines || line[p.first])) check = false;
    if(!check) cout << "NO";
    else{
        cout <<"YES\n";
        for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) mat[i][j] = 1;
        for(int i = 0; i < m; i++) if(line[i])for(int j = 0; j < n; j++)mat[i][j] = 0;      
        for(int i = 0; i < n; i++) if(col[i])for(int j = 0; j < m; j++)mat[j][i] = 0; 
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++) cout << mat[i][j] << ' ';
            cout << '\n';
        }
    }
    return 0;
}