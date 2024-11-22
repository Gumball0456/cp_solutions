#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair

using namespace std;


int main(){
	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tc = 1;
	//cin >> tc;
	while(tc--){
        string s; cin >> s;
		int ans = 0;
		for(int i = 0; i < s.length(); i++){
			for(int j = i + 1; j < s.length(); j++){
				int k = j + 1;
				bool a = false, b = false;
				for(; k < s.size() && ! a; k++)
					if(s[k] == s[i]) a = true;
				for(; k < s.size() && !b; k++)
					if(s[k] == s[j]) b = true;
				if(a && b) ans++;
			}
		}
		cout << ans << '\n';
    }
	return 0;
}
