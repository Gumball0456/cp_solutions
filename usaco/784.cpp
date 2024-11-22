#include <bits/stdc++.h>

using namespace std;

int sft[1001];

int main(){
	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
	int l[n][2];
	int max_t = 0;
	for(auto &c: l){
		int a, b; cin >> c[0] >> c[1];
		for(int i = c[0]; i < c[1]; i++)
			sft[i]++;
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		for(int j = l[i][0]; j < l[i][1]; j++)
			sft[j]--;
		int lt = 0;
		for(int j = 0; j < 1001; j++)
			lt += sft[j] > 0 ? 1 : 0;
		for(int j = l[i][0]; j < l[i][1]; j++)
			sft[j]++;
		ans = max(ans, lt);
	}
	cout  << ans << '\n';
	return 0;
}
