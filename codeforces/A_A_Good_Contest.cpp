#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n,b,a; cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s >> b >> a;
        if(b >= 2400 && a - b > 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}