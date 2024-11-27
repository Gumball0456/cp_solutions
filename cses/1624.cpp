// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

char board[8][8];
bool col[8];
bool diag1[15], diag2[15];
int ans;

void solve(int i = 0){
	if(i == 8){
		ans++; 
		return;
	}
	for(int j = 0; j < 8; j++){
		if(board[i][j] == '*' || col[j] || diag1[i + j] || diag2[7 - i + j]) continue;
		col[j] = diag1[i + j] = diag2[7 - i + j] = true;
		solve(i + 1);
		col[j] = diag1[i + j] = diag2[7 - i + j] = false;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// Reading the board;
	for(auto &l: board)
		for(auto &i: l)
			cin >> i;
	solve();
	cout << ans << '\n';
}

