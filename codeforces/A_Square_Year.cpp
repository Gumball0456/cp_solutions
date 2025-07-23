#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int root = (int) sqrt(n);
        if(root * root != n) cout << -1 << '\n';
        else if (n == 0) printf("%d %d\n", 0,0);
        else printf("%d %d\n", 1, root - 1);
    }
    return 0;
}