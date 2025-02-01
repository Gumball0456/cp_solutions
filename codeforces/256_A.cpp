#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s, t; cin >> s >> t;
    int ans = 0;
    for(char &ch: t)
        if(s[ans] == ch) ans++;
    cout << ans + 1;
}
