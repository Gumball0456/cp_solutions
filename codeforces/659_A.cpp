#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main(){
    int n, a, b; cin >> n >> a >> b;
    b = ((b % n) + n) % n;
    cout << (a - 1 + b) % n + 1; 
    return 0;
}   