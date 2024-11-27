#include <bits/stdc++.h>

using namespace std;

bool check(int n, int m){
	int digs[10] = {};
	for(int i = 0; i < 5; i++){
		if(digs[n % 10]++) return false;
		n /= 10;
	}
	for(int i = 0; i < 5; i++){
		if(digs[m % 10]++) return false;
		m /= 10;
	}
	return true;
}

int main(){
	int n; cin >> n;
	int count = 0;
	while(n != 0){
		if(count++ > 0)
			cout << '\n';
		bool found = false;
		for(int i = 1234; i < (int) 98765 / n + 1; i++){
			if(check(i, i * n)){
				found = true;
				printf("%05d / %05d = %d\n", i * n, i, n);
			}
		}
		if(!found) cout << "There are no solutions for " << n << ".\n";
		cin >> n;
	}
}
