#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	int ans = 0, p = 5;
	while(n >= p){
		ans += n / p;
		p *= 5;
	}
	cout << ans << '\n';
}
