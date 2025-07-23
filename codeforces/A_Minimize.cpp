#include <iostream>

using namespace std;
using ll = long long;

int main(){
    int tc = 1; cin >> tc;
    while(tc--){
        int a , b;  cin >> a >> b;
        int ans = 100000;
        for(int i = a; i <= b; i++) ans = min(i - a + b - i, ans);
        cout << ans << '\n';
    }
   
    return 0;
}