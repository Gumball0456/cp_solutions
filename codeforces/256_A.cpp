#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s, t; cin >> s >> t;
    int i = 0, j = 0;
    while(i < s.size() && j < t.size()){
        if(s[i] == t[j]) i++;
        j++;
    }
    cout << i + 1;
}
