#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	int els[n];
	for(int &i:els) cin >> i;
	sort(els, els + n);
	int ans = 1;
	for(int i = 1; i < n; i++){
		ans += els[i] != els[i-1];
	}
	cout << ans;
	return 0;
}
