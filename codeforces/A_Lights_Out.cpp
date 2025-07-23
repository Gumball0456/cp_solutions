#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int g[3][3];

int main(){
    int curr;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> curr;
            if(curr % 2 == 0) continue;
            g[i][j] = !g[i][j];
            if(i > 0)g[i-1][j] = !g[i-1][j];
            if(i < 2)g[i+1][j] = !g[i+1][j];
            if(j > 0)g[i][j - 1] = !g[i][j-1];
            if(j < 2)g[i][j + 1] = !g[i][j+1];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) cout << !g[i][j];
        cout << '\n';
    }
    return 0;
}