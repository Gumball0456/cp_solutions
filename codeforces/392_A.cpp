#include <iostream>
using namespace std;
    
using ll = long long;

bool seen[100001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int els[n], curr = n;
    for(int &el: els) cin >> el;
    for(int i = 1; i <= n; i++){
        seen[els[i-1]] = true;
        while(seen[curr]){
            cout << curr-- << ' ';
        }
        cout << '\n';
    }
}
