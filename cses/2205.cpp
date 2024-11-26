#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
	int n; cin >> n;
	for(int i = 0; i < (1 << n); i++){
		for(int j = n - 1; j >= 0; j--){
			cout <<((i & (1 << j)) == 1 << j);
		}
		cout << '\n';
	}
}
