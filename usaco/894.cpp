#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("planting.in", "r", stdin);
	freopen("planting.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
	vector<int> d(n);
	for(int i = 0; i < n - 1; i++){
		int a, b; cin >> a >> b;
		d[a - 1]++;
		d[b - 1]++;
	}
	int ans = 0;
	for(auto &a: d)
		if(a > ans) ans = a;
	cout << ans + 1;
}
