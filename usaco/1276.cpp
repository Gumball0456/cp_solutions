#include <bits/stdc++.h>

#define SIZE 101

using namespace std;

int brn[SIZE];

bool check(){
	for(int i = 0; i < SIZE; i++) if(brn[i] > 0) return false;
	return true;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m; cin >> n >> m;
	for(int i = 0; i < n; i++){
		int a, b, c; cin >> a >> b >> c;
		for(int j = a; j <= b; j++) brn[j] = c;
	}
	int acs[m][4];
	for(auto &i: acs) for(int &j: i) cin >> j;
	int ans = (int) 1e7;
	for(int b = 0; b < (1 << m); b++){
		int lans = 0;
		for(int i = 0; i < m; i++){
			if(b & (1 << i)){
				lans += acs[i][3];
				for(int j = acs[i][0]; j <= acs[i][1]; j++){
					brn[j] -= acs[i][2];
				}
			}
		}
		if(check()) ans = min(ans, lans);
		for(int i = 0; i < m; i++){
			if(b & (1 << i)){
				for(int j = acs[i][0]; j <= acs[i][1]; j++){
					brn[j] += acs[i][2];
				}
			}
		}
	}
	cout << ans;
	return 0;
}
