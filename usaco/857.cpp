#include <bits/stdc++.h>
using namespace std;

int A[101];
int B[101];
bool msk[10000];

void solve(int d = 0, int ans = 1000){
	if(d == 4){
		if(!msk[ans]){
			msk[ans] = true;
		}
	}else{
		if(d % 2 == 0){
			for(int i = 0; i < 101; i++){
				if(A[i] <= 0) continue;
				A[i]--;
				B[i]++;
				solve(d + 1, ans - i);
				A[i]++;
				B[i]--;
			}
		}else{
			for(int i = 0; i < 101; i++){
				if(B[i] <= 0) continue;
				B[i]--;
				A[i]++;
				solve(d + 1, ans + i);
				B[i]++;
				A[i]--;
			}
		}
	}
}

int main() {
	freopen("backforth.in", "r", stdin);
	freopen("backforth.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int el;
	for(int i = 0; i < 10; i++){
		cin >> el;
		A[el]++;
	}
	for(int i = 0; i < 10; i++){
		cin >> el;
		B[el]++;
	}
	solve();
	int ans = 0;
	for(bool &i: msk){
		if(i)ans++;
	}
	cout << ans << '\n';
}
