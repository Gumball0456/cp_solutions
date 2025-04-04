#include <bits/stdc++.h>
	
using namespace std;
using ll = long long;

bool is_prime(int n){
    if(n == 2) return true;
    bool prime = true;
    for(int i = 2; (ll) i * i <= n; i++){
        if(n % i == 0) prime = false;
    }
    return prime;
}

int main() {
    int n, m; cin >> n >> m;
    n++;
    while(!is_prime(n))n++;
    if(n == m) cout << "YES";
    else cout << "NO";
}