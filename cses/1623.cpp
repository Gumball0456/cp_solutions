#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll drive(int e[], ll sum1, ll sum2, int size, int i){
	if(i == size) return abs(sum1 - sum2);
	return min(drive(e, sum1 + e[i], sum2, size, i + 1),
			drive(e, sum1, e[i] + sum2, size, i + 1));
}

ll solve(int e[], int size){
	ll sum1 = 0, sum2 = 0;
	return drive(e, sum1, sum2, size, 0);
};
int main(){
	int n; cin >> n;
	int els[n];
	for(int &i: els) cin >> i;
	cout << solve(els, n);
}
