#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int a, x, y; cin >> a >> x >> y;
    if(y < 0 || y % a == 0){
        cout << -1;
        return 0;
    }
    int num_row = (y + a - 1) / a;
    int size_row = (2 > num_row || !(num_row & 1)) ? 1 : 2;
    int st_row;
    if(((size_row == 1 && 2 * abs(x) >= (a)) || (size_row == 2 && (abs(x) >= a || abs(x) == 0)))){
        cout << -1;
        return 0;
    }
    if(num_row < 2) st_row = num_row;
    else st_row = num_row & 1 ? 3 + (num_row - 3) / 2 * 3 : 2 + (num_row - 2) / 2 * 3;
    if(size_row == 2 && x > 0) cout << st_row + 1;
    else cout << st_row;
    return 0;
}