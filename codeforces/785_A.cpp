#include <bits/stdc++.h>
	
using namespace std;
using ll = long long;
	
int main() {
    map<string, int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
	int n; cin >> n;
    int ans = 0;
    while(n--){
        string s; cin >> s;
        ans += mp[s];
    }
    cout << ans;
}